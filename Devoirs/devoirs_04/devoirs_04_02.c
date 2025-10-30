#include <stdio.h>
int main(void)
{
    char a,b,c;
    printf("Please enter 3 letters:\n");
    scanf("%c %c %c", &a, &b, &c);

    printf("\nHere are the corresponding ASCII codes:\n");
    printf("a--------->%d\n", a);
    printf("b--------->%d\n", b);
    printf("c--------->%d\n", c);


    return 0;
}