#include <stdio.h>
int main(void)
{
    int i = 0, j = 0;

    for(i=0, j=10; i<10; ++i, --j)
    {
        printf("i: %d & j:%d\n", i, j);
    }

    int a = 1, b = 2, c = 0;
    c = (a = 5, b = 10);
    printf("c = (a = 5, b = 10): %d", c);


    return 0;
}