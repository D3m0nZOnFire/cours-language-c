#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ch07_eg01_print_stars.h"

int starX[8] = {0}, starY[8] = {0};

int main(void)
{
    srand(time(NULL));
    create_stars(8);
    print_stars(8);


    return 0;
}

void create_stars(int n)
{
    for (int i = 0; i < n; i++)
    {
        starX[i] = rand() % 20;
        starY[i] = rand() % 10;
    }
}

void print_stars(int n)
{
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