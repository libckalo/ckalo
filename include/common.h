/*
    Copyright © 2022 Zsx

    This file is part of LibCKalo.

    LibCKalo is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

    LibCKalo is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along with LibCKalo. If not, see <https://www.gnu.org/licenses/>.
*/

#pragma once

typedef enum { CAREFUL, KALO } character_type;
typedef struct { int version; character_type type; } character_model;
