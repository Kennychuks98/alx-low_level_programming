#include "main.h"
#include <stdio.h>
#include <stdlib.h>
void print_grid(int **grid, int width, int height)
{
int w;
int h;
for (h = 0; h < height; h++)
{
for (w = 0; w < width; w++)
{
printf("%d ", grid[h][w]);
}
printf("\n");
}
}
int main(void)
{
int **grid;
int w, h;
w = 6;
h = 4;
grid = alloc_grid(w, h);
if (grid == NULL)
{
return (1);
}
for (h = 0; h < 4; h++)
{
for (w = 0; w < 6; w++)
{
grid[h][w] = 0;
}
}
print_grid(grid, 6, 4);
for (h = 0; h < 4; h++)
{
free(grid[h]);
}
free(grid);
return (0);
}

