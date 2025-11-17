#include <stdio.h>
#include "ch08_eg01.h"

void testFuncWithPointers()
{
    int x = 15;
    int * ptr_X = NULL;
    ptr_X = &x;


    printf("valeur de x: %d\n", x);
    printf("adresse de x: 0x%0x\n", &x);
    printf("contenu de ptr_X: 0x%0x\n", ptr_X);
    printf("valeur pointee par ptr_X: %d\n", *ptr_X);
}