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
	if (width == 0 || height == 0)
		return (NULL);
	int **one = alloc(height * sizeof(*int));
	int i, j;

	for (i = 0 ; i < height; i++)
	{
		one[i] = alloc(width * sizeof(int));
		if (one == NULL)
			return (NULL);
		for (j = 0 ; j < width; j++)
		{
			one[i][j] = alloc[i][j];
		}
	}
	return (one);
}
