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

// some magic, i'm too lazy
#define GET_VERSION(ch) ((ch)->version)
#define GET_CHARACTER(ch) ((ch)->type)
int detect_version(const character_model *ch);
character_type detect_character(const character_model *ch);  
