#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid- entry point
 *@height :bbb
 * @width: saged
 * * Return: size of @s
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int *one[height];

	if (width == 0 || height == 0)
		return (NULL);
	for (i = 0 ; i < height; i++)
	{
		one[i] = malloc(width * sizeof(int));
		if (one[i] == NULL)
			return (NULL);
		for (j = 0 ; j < width; j++)
		{
			one[i][j] = alloc_grid[i][j];
		}
	}
	return (one);
}
