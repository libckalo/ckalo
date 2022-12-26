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
