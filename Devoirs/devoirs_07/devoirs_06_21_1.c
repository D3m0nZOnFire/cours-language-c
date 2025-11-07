#include <stdio.h>
#include "devoirs_06_21_1.h"

int main(void)
{
    int array1[] = {1, 2, 3, 4, 4};
    int array2[] = {1, 2, 3, 4, 5};
     
    printf("%s\n", ch08_ex21_1_CompareArray(array1,array2,0) ? "true" : "false");
    printf("%s\n", ch08_ex21_1_CompareArray(array1,array2,4) ? "true" : "false");
    printf("%s\n", ch08_ex21_1_CompareArray(array1,array2,5) ? "true" : "false");
     
    return 0;
}

bool ch08_ex21_1_CompareArray(int array1[], int array2[], int size)
{
    bool isSame = true;
    for (int i = 0; i < size; i++)
    {
        if(array1[i] != array2[i]){
            isSame = false;
            break;
        }
    }
    return isSame;
}