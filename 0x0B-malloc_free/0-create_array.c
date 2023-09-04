#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array- entry point
 *
 * @size: saged
 *@c:sagoda
 *
 * * Return: size of @s
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));

	if (size == 0 || arr == NULL)
		return (NULL);
	while (size--)
	{
		arr[size] = c;
	}
	return (arr);
}
