#include "main.h"
#include <stdlib.h>

/**
* free_grid - creates two dimensional grid
* @grid: grid array
* @height: height of grid
* Return: returns nothing
* Author: mgemoraw
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
return;
}
