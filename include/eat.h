/*
    Copyright © 2022 Zsx

    This file is part of LibCKalo.

    LibCKalo is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

    LibCKalo is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along with LibCKalo. If not, see <https://www.gnu.org/licenses/>.
*/

#include "proxy.h"
#include "common.h"

#define FOOD_MAGIC 0x12345678
#define MAX_FOOD_NAME_LENGTH 64

struct food {
    int magic;
    char *name;
    size_t amount;
};

DEFINE_REAL_FUNC_HEADERS(eat, int, struct food * const);
struct food *make_food(const char *name, size_t amount);
