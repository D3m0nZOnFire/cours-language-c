#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ch06_eg04_print_stars.h"

int main(void)
{
    srand(time(NULL));
    create_and_print_stars(8);


    return 0;
}

/* void create_and_print_stars(int n)
{
    int tabX[20] = {0}, tabY[10] = {0};
    for (int i = 0; i < n; i++)
    {
        int coordX = rand() % 20;
        int coordY = rand() % 10;

        tabX[coordX] = 1;
        tabY[coordY] = 1;
    }

    for (int y = 0; y < 10; y++)
    {
        for (int x = 0; x < 20; x++)
        {
            if(tabX[x] == 1 && tabY[y] == 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");        
    }
    
} */

void create_and_print_stars(int n)
{
    int starX[8] = {0}, starY[8] = {0};  // Arrays to store coordinates
    
    
    for (int i = 0; i < n; i++)
    {
        starX[i] = rand() % 20;
        starY[i] = rand() % 10;
    }

    
    for (int y = 0; y < 10; y++)
    {
        for (int x = 0; x < 20; x++)
        {
            int found = 0;
            
            for (int star = 0; star < n; star++)
            {
                if (x == starX[star] && y == starY[star])
                {
                    found = 1;
                    break;
                }
            }
            printf("%c", found ? '*' : '_');
        }
        printf("\n");
    }
}