#ifndef MORPION
#define MORPION
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} coordinates;

bool checkColumns(int y, int** grille, int gridSize);
bool checkRows(int x, int** grille, int gridSize);
bool checkDiagonals(int** grille, int gridSize);

bool isFree(coordinates playerCoordinates, int** grid);
void displayGrid(int** grid, int gridSize);
bool winCheck(int** grid, coordinates playerCoordinates, int gridSize);

void play(int player, int** grid, coordinates* coordonner, int gridSize);
int** create_grid(int sizeGrid);
void game(int** grid, int sizeGrid);

void displayCredits(void);

#endif
