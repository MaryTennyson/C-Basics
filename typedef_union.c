#include <stdio.h>

typedef union
{
    int i;
    float f;
} Number;

int main()
{
    Number n;
    n.f = 3.14;
    n.i = 3;
    printf("Float: %.2f , %d\n", n.f, n.i); // union daha sonra değişime uğradığında önceki verileri unutur.
    return 0;
}