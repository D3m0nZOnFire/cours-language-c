#include <stdio.h>
int main(void)
{
    int myInt;
    printf("Entrer un entier > ");
    scanf("%i", &myInt);

    printf("Decimal: %i \n", myInt);
    printf("Octal: %o \n", myInt);
    printf("Hexadecimal: %0x \n", myInt);

    return 0;
}