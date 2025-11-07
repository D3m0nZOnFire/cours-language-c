#include <stdio.h>
#include "devoirs_06_21_2.h"

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
     
    ch08_ex21_2_PrintArray(array, 0);
    ch08_ex21_2_PrintArray(array, 4);
    ch08_ex21_2_PrintArray(array, 5);
     
    return 0;
}

void ch08_ex21_2_PrintArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if(i != size-1){
            printf("%d ", array[i]);
        }
        else
        {
            printf("%d", array[i]);
        }
    }
    
}