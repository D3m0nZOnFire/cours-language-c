#include <stdio.h>
int main(void)
{
    const double real = 157.89260032;

    const int entier = 90;

    printf("%.13f\n", real);
    printf("%6.1f\n", real);
    printf("%+09.2f\n", real);
    printf("%7.5f\n", real);
    printf("%.3f\n", real);

    printf("%d %c", entier, entier);


    return 0;
}