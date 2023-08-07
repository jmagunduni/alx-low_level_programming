#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2dimention grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int counter;

	for (counter = 0; counter < height; i++)
	{
		free(grid[counter]);
	}
	free(grid);
}
