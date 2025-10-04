#include <stdio.h>
int main(void)
{
    int a = 0;
    a = (10 + 6) / (3 - 1); printf("%d\n", a);
    a = (10 + 6) / 3 - 1; printf("%d\n", a);
    a = 10 + 6 / (3 - 1); printf("%d\n", a);
    a = 10 + 6 / 3 - 1; printf("%d\n", a);

    return 0;
}