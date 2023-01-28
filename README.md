//瞎写的一个破玩应

Copyright © 2022 Zsx
# LibCKalo: A framework for Careful. S & Kalo

## 代理函数以及实际函数的说明
（以函数eat举例）

如果要为小伽以及两个版本分别实现不同的函数，
则可将eat定义为代理函数，
此时eat将成为根据传入的角色信息返回相应实际函数的函数。
{c,k}_eat{1,2}为实际将要实现的函数。

## 代理函数定义宏说明

```DEFINE_PROXY_FUNC(func_name)```

定义代理方法

参数：

```func_name```: 原函数名（代理函数名）

```DEFINE_REAL_FUNC_HEADERS(func_name, func_ret, func_args...)```

声明四个未来将会实现的实际函数以及它们的函数指针类型和代理函数的函数指针类型

参数：

```func_name```: 原函数名

```func_ret```: 函数返回值

```func_args...```: 函数参数 (可变)


## 如何定义新函数
(以函数```int eat(struct food *f)```为例)

在include下创建eat.h:
```c
#include "proxy.h"

DEFINE_REAL_FUNC_HEADERS(eat, int, struct food *);
```
在src下创建eat.c:
```c
#include <...> // 需要的标准头文件
#include "eat.h"

DEFINE_PROXY_FUNC(eat);

int c_eat1(struct food *f) { ... } // 小心v1逻辑
int k_eat1(struct food *f) { ... } // 伽罗v1逻辑
int c_eat2(struct food *f) { ... } // 小心v2逻辑
int k_eat2(struct food *f) { ... } // 伽罗v2逻辑
```

## 名字的来源
    Lib         C           Kalo
    ^~~         ^           ^~~~
   库前缀  小心缩写(Careful)  伽罗全拼