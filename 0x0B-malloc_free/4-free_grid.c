#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees 2 dimensional gird
 * @grid: 2nd grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
int a;
for (a = 0; a < height; a++)
{
free(grid[a]);
}
free(grid);
}
