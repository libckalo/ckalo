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
