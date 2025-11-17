#include <stdio.h>
#include "devoirs_08_06.h"

int main(void)
{
    int A[] = {1, 2, 3, 4, 0, 0, 0, 0, 0, 0};
    int B[] = {11, 12, 13, 14};
     
    ch09_ex06_CopyArrays(A, 4, B, 4);

    displayIntArray(A, 10);
     
    return 0;
}

void ch09_ex06_CopyArrays(int *A, int AtabSize, int *B, int BtabSize)
{
    for (int i = 0; i < BtabSize; i++)
    {
        A[i+AtabSize] = B[i];
    }
    
}

void displayIntArray(int *arr, int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        if (i > 0) printf(", ");
        printf("%d", arr[i]);
    }
    printf("]\n");
}