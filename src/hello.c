/*
    Copyright © 2022 Zsx

    This file is part of LibCKalo.

    LibCKalo is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

    LibCKalo is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along with LibCKalo. If not, see <https://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include "hello.h"

// simple hello
DEFINE_PROXY_FUNC(hello);

void k_hello1(void)
{
    printf("Hello from Kalo v1\n");
}
void c_hello1(void)
{
    printf("Hello from Careful v1\n");
}
void k_hello2(void)
{
    printf("Hello from Kalo v2\n");
}
void c_hello2(void)
{
    printf("Hello from Careful v2\n");
}
