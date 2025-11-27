#include <stdio.h>
#include <stdlib.h>
#include "ch09_eg02.h"

int* allocateIntArray(int n)
{
    if(n <= 0) {
        return NULL;
    }
    int *ptr = malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        return NULL;
    }

    return ptr;
}

void fillArrayWithSequence(int *tab, int n)
{
    for(int i = 0; i < n; i++){
        *(tab + i) = i;
    }
}

int sumArray(const int *tab, int n)
{
    long long int result = 0;

    for (int i = 0; i < n; i++)
    {
        result += *(tab + i);
    }

    return result;    
}

void freeIntArray(int **pTab)
{
    free(*pTab);
    *pTab = NULL;
}