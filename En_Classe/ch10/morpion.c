#include <stdio.h>
#include "morpion.h"

// grille[lignes][colonnes]

bool checkColumns(int y, int** grille, int gridSize)
{
    int number = grille[0][y];
    if(number == 0)
    {
        return false;
    }

    for (int i = 1; i < gridSize; i++)
    {
        if(grille[i][y] != number) 
        {
            return false;
        }
    }

    return true;
}

bool checkRows(int x, int** grille, int gridSize)
{
    int number = grille[x][0];
    if(number == 0)
    {
        return false;
    }

    for (int i = 1; i < gridSize; i++)
    {
        if(grille[x][i] != number) 
        {
            return false;
        }
    }

    return true;
}

bool checkDiagonals(int** grille, int gridSize)
{
    bool isAscWinning = true, isDescWinning = true;
    
    int number = grille[gridSize-1][0];
    if(number == 0)
    {
        return false;
    }

    for (int i = 1; i < gridSize; i++)
    {
        //Diago ascendante
        if(grille[gridSize-1-i][i] != number)
        {
            isAscWinning = false;
        }
    }

    number = grille[0][0];
    if(number == 0)
    {
        return false;
    }

    for (int i = 1; i < gridSize; i++)
    {
        //Diago descendante
        if(grille[i][i] != number)
        {
            isDescWinning = false;
        }
    }

    if(isAscWinning || isDescWinning) {
        return true;
    }

    return false;
}

bool isFree(coordinates playerCoordinates, int** grid)
{
 
    int playerCoordinatesX = playerCoordinates.x;
    int playerCoordinatesY = playerCoordinates.y;
 
    if(grid[playerCoordinatesX][playerCoordinatesY] != 0)
    {
        return false;
    }
 
 
    return true;
}

void displayGrid(int** grid, int gridSize)
{
    system("cls"); //clear console

    // Print column numbers (Y axis) at the top
    printf("    ");
    for(int j = 0; j < gridSize; ++j)
    {
        printf(" %d  ", j + 1);  // Column numbers (1-indexed)
    }
    printf("\n");

    // Print top border
    printf("   ");
    for(int j = 0; j < gridSize; ++j)
    {
        printf("----");
    }
    printf("\n");

    for(int i = 0; i < gridSize; ++i)
    {
        printf("%d |", i + 1);  // Row number (X coordinate, 1-indexed)

        for(int j = 0; j < gridSize; ++j)
        {
            if(grid[i][j] == 1)
            {
                printf(" X |");
            } else if(grid[i][j] == 2)
            {
                printf(" O |");
            } else
            {
                printf("   |");
            }
        }
        printf("\n");

        // Print separator line
        printf("   ");
        for(int j = 0; j < gridSize; ++j)
        {
            printf("----");
        }
        printf("\n");
    }

    printf("\nX = ligne (row), Y = colonne (column)\n");
}

bool winCheck(int** grid, coordinates playerCoordinates, int gridSize)
{
 
    int playerCoordinatesX = playerCoordinates.x;
    int playerCoordinatesY = playerCoordinates.y;
    bool isAwin = false;
 
    isAwin = checkColumns(playerCoordinatesY, grid, gridSize) || checkRows(playerCoordinatesX, grid, gridSize) || checkDiagonals(grid, gridSize);
   
    return isAwin;
}

void play(int player, int** grid, coordinates* coordinates, int gridSize)
{
    bool isCorrect = true;
    do
    {
        isCorrect = true;
        
        printf("Ou souhaitez-vous mettre votre pion ? (x y, entre 1 et %d) \n", gridSize);
        scanf("%d %d", &coordinates->x, &coordinates->y);
        coordinates->x--;
        coordinates->y--;

        if(coordinates->x < 0 || coordinates->x >= gridSize) {
            isCorrect = false;
            printf("Coordonnées invalides! Utilisez des valeurs entre 1 et %d\n", gridSize);
        }

        if(coordinates->y < 0 || coordinates->y >= gridSize) {
            isCorrect = false;
            printf("Coordonnées invalides! Utilisez des valeurs entre 1 et %d\n", gridSize);
        }
 
    } while(!isCorrect || !isFree(*coordinates, grid));

    grid[coordinates->x][coordinates->y] = player;
}

int** create_grid(int sizeGrid)
{
    int **grid = malloc(sizeGrid * sizeof(int*));
    for (int i = 0; i < sizeGrid; i++)
    {
        grid[i] = malloc(sizeGrid * sizeof(int));
        
        for (int j = 0; j < sizeGrid; j++)
        {
            grid[i][j] = 0;
        }
        
    }
    
    return grid;
}

void game(int** grid, int sizeGrid)
{
    int player = 1;
    coordinates coordinates;
    int movesCount = 0;
    bool gameWon = false;
    
    while(movesCount < sizeGrid * sizeGrid && !gameWon)
    {
        displayGrid(grid, sizeGrid);
        printf("Tour du  joueur %d\n", player);

        play(player, grid, &coordinates, sizeGrid);

        gameWon = winCheck(grid, coordinates, sizeGrid);

        if(gameWon)
        {
            displayGrid(grid, sizeGrid);
            printf("Le joueur %d a gagné!\n", player);
        }

        player = (player == 1) ? 2 : 1;
        movesCount++;
    }

    if(!gameWon)
    {
        displayGrid(grid, sizeGrid);
        printf("Match nul!\n");
    }
}

void displayCredits(void)
{
    printf("\n");
    printf("========== CREDITS ==========\n");
    printf("Ecole: He-Arc, HES-SO\n");
    printf("Developpeurs:\n");
    printf("  - Theo Roth\n");
    printf("  - Valeria Storz\n");
    printf("  - Ivo Pereira Dantas\n");
    printf("=============================\n");
}