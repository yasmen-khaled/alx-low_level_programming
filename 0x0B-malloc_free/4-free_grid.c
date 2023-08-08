#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  array
 *
 * @grid: 2d
 *
 * @height: height dimension
 *
 * Description: frees memory
 *
 * Return: grid
 *
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
	free(grid[x]);
	}
	free(grid);
}
