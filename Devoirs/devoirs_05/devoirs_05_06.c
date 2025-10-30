#include <stdio.h>
int main(void)
{
    int a = 0, b = 0, c = 0;

    printf("Entrer trois valeurs > ");
    scanf("%d %d %d", &a, &b, &c);

    //SECTION - PART 1
    {
        int max = a;
        if(b > max)
        {
            max = b;
        }
        if(c > max)
        {
            max = c;
        }
        printf("La plus grande valeur est : %d\n", max);
    }
    //!SECTION

    //SECTION - PART 2
    {
        if (a >= b && a >= c)
            printf("La plus grande valeur est : %d\n", a);
        else if (b >= a && b >= c)
            printf("La plus grande valeur est : %d\n", b);
        else
            printf("La plus grande valeur est : %d\n", c);
    }
    //!SECTION

    //SECTION - PART 3
    {
        int max = 0;
        max = (a > b) ? a : b;
        max = (max > c) ? max : c;

        printf("La plus grande valeur est : %d\n", max);
    }
    //!SECTION

    //SECTION - PART 4
    {
        printf("La plus grande valeur est : %d\n", (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
    }
    //!SECTION

    return 0;
}