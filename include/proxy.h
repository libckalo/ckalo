/*
 * Copyright © 2022 Zsx
 * This file is part of LibCKalo.
 *
 * LibCKalo is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation, either version 3
 * of the License, or (at your option) any later version.
 *
 * LibCKalo is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See
 * the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public
 * License along with LibCKalo. If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once
#include "common.h"
#include "detect.h"

// naming rule: (c|k)_${FUNC_NAME}(1|2)
#define DEFINE_REAL_FUNC_HEADERS(func_name, func_ret, func_args...) \
    func_ret c_##func_name##1(func_args); \
    func_ret k_##func_name##1(func_args); \
    func_ret c_##func_name##2(func_args); \
    func_ret k_##func_name##2(func_args); \
    typedef func_ret (*func_name##_func_t)(func_args); \
    typedef func_name##_func_t (*func_name##_proxy_func_t)(const character_model *ch);

#define DEFINE_PROXY_FUNC(func_name) \
    func_name##_func_t func_name(const character_model *ch) \
    { \
         int result = ((detect_version(ch) - 1) << 1) | detect_character(ch); \
         switch (result) { \
            case 0: return c_##func_name##1; break; \
            case 1: return k_##func_name##1; break; \
            case 2: return c_##func_name##2; break; \
            case 3: return k_##func_name##2; break; \
        } \
        return NULL; \
    }
