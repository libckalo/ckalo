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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "eat.h"

// allocate food
// returns malloc()ed struct
struct food *make_food(const char *name, size_t amount)
{
    struct food *r = (struct food *)malloc(sizeof(struct food));
    r->magic = FOOD_MAGIC;
    r->name = (char *)malloc(MAX_FOOD_NAME_LENGTH + 8); // for " (eaten)" suffix
    strncpy(r->name, name, MAX_FOOD_NAME_LENGTH);
    r->amount = amount;
    return r;
}

int _internal_eat(struct food * const item)
{
    if (item->magic != FOOD_MAGIC) {
        fprintf(stderr, "_internal_eat: food struct magic number not matched\n");
        return -1;
    }
    int amount = item->amount;
    item->amount = 0;
    strcat(item->name, " (eaten)");
    return amount;
}

DEFINE_PROXY_FUNC(eat);

int c_eat1(struct food * const item)
{
    printf("Eating %s, amount %zd, from Careful v1", item->name, item->amount);
    return _internal_eat(item);
}

int k_eat1(struct food * const item)
{
    printf("Eating %s, amount %zd, from Kalo v1", item->name, item->amount);
    return _internal_eat(item);
}

int c_eat2(struct food * const item)
{
    printf("Eating %s, amount %zd, from Careful v2", item->name, item->amount);
    return _internal_eat(item);
}

int k_eat2(struct food * const item)
{
    printf("Eating %s, amount %zd, from Kalo v2", item->name, item->amount);
    return _internal_eat(item);
}
