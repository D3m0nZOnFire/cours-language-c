#include <stdio.h>
int main(void)
{
    int a = 0, b = 0;

    printf("Entrer deux valeurs > ");
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;

    printf("max: %d, min: %d", max, min);


    return 0;
}