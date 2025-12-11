#include <stdio.h>
#include "morpion.h"

int main(void)
{
    int sizeGrid = 0;
    printf("Bienvenue sur SUPER TIC TAC TOE\n");
    printf("===============================\n");
    printf("Le but du jeu est d'aligner avant son adversaire 3 symboles identiques horizontalement, verticalement ou en diagonale.\n");
    printf("Choisir la taille du tableau entre 3 et 9 : \n");
    scanf("%d", &sizeGrid);
   
    int** grid = NULL;
 
    grid = create_grid(sizeGrid);
 
    game(grid, sizeGrid);

    for (int i = 0; i < sizeGrid; i++)
    {
        free(grid[i]);
    }
    free(grid);
    grid = NULL;

    displayCredits();
 
    return 0;
}
