#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ch07_eg02_print_stars_II.h"

#define NB_STARS 36
#define NB_COLONNES 40
#define NB_LIGNES 10

int main(void)
{
    srand(time(NULL));

    struct starStruct starTab[NB_STARS];
    char skyTab[NB_COLONNES*NB_LIGNES];

    setStar(starTab);
    initSky(skyTab, starTab);
    showSky(skyTab);
     

     
    return 0;
}

void setStar(struct starStruct starTab[])
{

    for (int i = 0; i < NB_STARS; i++)
    {
        starTab[i].x = rand() % NB_COLONNES;
        starTab[i].y = rand() % NB_LIGNES;
    }
}

void initSky(char skyTab[], struct starStruct starTab[])
{
    int cpt = 0;
    for (int y = 0; y < NB_LIGNES; y++)
    {
        for (int x = 0; x < NB_COLONNES; x++)
        {
            int found = 0;
            
            for (int star = 0; star < NB_STARS; star++)
            {
                if (x == starTab[star].x && y == starTab[star].y)
                {
                    found = 1;
                    break;
                }
            }
            skyTab[cpt] = found == 1 ? '*' : ' ';
            cpt++;
        }
    }
}

void showSky(char skyTab[])
{
    int cpt = 0;
    for (int y = 0; y < NB_LIGNES; y++)
    {
        for (int x = 0; x < NB_COLONNES; x++)
        {
            printf("%c", skyTab[cpt]);
            cpt++;
        }
        printf("\n");
    }
}
