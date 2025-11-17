#include <stdio.h>
#include "devoirs_08_10.h"

int main(void)
{
    int a = 5, b = 10;
    
    printf("Before: a: %d, b: %d\n", a, b);
    ch09_ex10_Swap(&a, &b);
    printf("After:  a: %d, b: %d\n", a, b);
     
    return 0;
}

void ch09_ex10_Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp; 
}