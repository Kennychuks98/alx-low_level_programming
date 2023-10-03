#include "main.h"
#include <stdlib.h>
/**
*print_grid - prints a grid of integers
*@grid: the address of the two dimensional grid
*@width: width of the grid
*@height: height of the grid
*
*Return: Nothing.
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
}
return (grid);
}

