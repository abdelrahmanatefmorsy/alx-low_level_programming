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
	int **one = malloc(height * sizeof(*one));

	if (width == 0 || height == 0 || one == NULL)
		return (NULL);
	for (i = 0 ; i < height; i++)
	{
		one[i] = malloc(width * sizeof(int));
		if (one[i] == NULL)
		{
			while (i--)
			{
				free(one[i]);
			}
			free(one);
			return (NULL);
		}
		for (j = 0 ; j < width; j++)
		{
			one[i][j] = 0;
		}
	}
	return (one);
}
