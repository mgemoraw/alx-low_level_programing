#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns grid of integers
* @width: input width of grid
* @height: height of grid
* Return: returns rectangular grid array
* Author: mgemoraw
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);

if ((grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (j = i - 1; j > 0; j--)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
