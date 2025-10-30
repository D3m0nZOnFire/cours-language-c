#include <stdio.h>
#include "devoirs_06_02.h"

int main(void)
{
    f3(5);


    return 0;
}

void f1()
{
    printf("bonjour\n");
}

void f2(int n)
{
    for (int i = 0; i < n; i++)
    {
        f1();
    }
    
}

int f3(int n)
{
    f2(n);
    return n;
}
