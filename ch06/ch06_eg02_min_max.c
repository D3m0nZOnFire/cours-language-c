#include <stdio.h>
#include "ch06_eg02_min_max.h"

int main(void)
{
    int a = 4, b = 5;

    printf("my_min: %d\n", my_min(a,b));
    printf("my_max: %d\n", my_max(a,b));

    return 0;
}

int my_min(int a, int b)
{
    return (a > b) ? b : a;
}

int my_max(int a, int b)
{
    return (a > b) ? a : b;
}