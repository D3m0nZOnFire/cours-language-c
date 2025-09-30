#include <stdio.h>
int main(void)
{
    int num =    37;
    
    for (int i = 0; i <= 12; i++)
    {
        int res = num*i;
        printf("%d * %d = %d\n", num, i, res);
    }
    
    return 0;
}