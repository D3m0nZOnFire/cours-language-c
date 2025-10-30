#include <stdio.h>
int main(void)
{
    int a;
    int b;
    int myChar;

    printf("a > ");
    scanf("%d", &a);

    printf("b > ");
    scanf("%d", &b);

    int resInt = (a+b)/2;
    double resDouble = ((double)a+(double)b)/2.0;

    printf("Entier: %d\n", resInt);
    printf("Double: %.6f\n", resDouble);

    return 0;
}