#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a = 5, b = 8;

    bool res = a == b;
    printf("a == b: %d\n", res);

    res = a!=b;
    printf("a != b: %d\n", res);

    res = a<b;
    printf("a < b: %d\n", res);

    res = a>b;
    printf("a > b: %d\n", res);

    res = (a < b) && (b < 10);
    printf("(a < b) && (b < 10): %d\n", res);

    res = (a > b) || (b < 10);
    printf("(a > b) || (b < 10): %d\n", res);

    res = !(a == b);
    printf("!(a == b): %d\n", res);

    return 0;
}