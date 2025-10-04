#include <stdio.h>
int main(void)
{
    int x = 6, y = 0;
    y = x++; printf("%d\n", y);
    y = ++x; printf("%d\n", y);
    y = x--; printf("%d\n", y);
    y = --x; printf("%d\n", y);

    return 0;
}