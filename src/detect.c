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

#include "common.h"
#include "detect.h"

int detect_version(const character_model *ch)
{
    // very simple
    return GET_VERSION(ch);
    /*switch (GET_VERSION(ch)) {
        case 1: return 1; break;
        case 2: return 2; break;
        default: return 0; break;
    }*/
}

character_type detect_character(const character_model *ch)
{
    // very simple
    return GET_CHARACTER(ch);
    /*switch (GET_CHARACTER(ch)) {
        case 0: return CAREFUL; break;
        case 1: return KALO; break;
    }*/
}
