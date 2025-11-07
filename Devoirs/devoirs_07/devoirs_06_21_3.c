#include <stdio.h>
#include "devoirs_06_21_3.h"

int main(void)
{
    int array[] = {-2, -2, -2, -2};
    
    ch08_ex21_3_FillArray(array, 4);
    ch08_ex21_2_PrintArray(array, 4);
    
    return 0;
}

int ch08_ex21_3_FillArray(int array[], int size)
{
    if (size <= 0) return 0;

    int count = 0, value = 0;

    while (count < size)
    {
        if(scanf("%d", &value) != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }

        if(value < 0)
        {
            break;
        }

        array[count++] = value;
    }
    
    return count;
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