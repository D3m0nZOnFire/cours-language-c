#include <stdio.h>

int square(int x);
int myFunc(int x);
int myFunc2(int x);

int main(void)
{
    int a = 0;

    printf("Entrer une valeur > ");
    scanf("%d", &a);

    printf("square: %d\n", square(a));
    printf("myFunc: %d\n", myFunc(a));
    //printf("myFunc2: %d\n", myFunc2(a));

    return 0;
}

int square(int x)
{
    return x*x;
}

int myFunc(int x)
{
    return (x*x) + (3*x) - 25;
}

/* int inline myFunc2(int x) 
{
    return (x*x) + (3*x) - 25;
} */