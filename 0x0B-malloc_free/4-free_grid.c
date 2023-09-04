#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid- entry point
 *@grid :sagoda
 * @height: saged
 * * Return: size of @s
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height ; i++)
		free(grid[i]);
	free(grid);
}
