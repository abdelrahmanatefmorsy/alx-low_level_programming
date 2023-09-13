#include "function_pointers.h"
#include <stdio.h>

/**
 *int_index- entry point
 * @array: saged
 *@size:sagoda
 *@cmp :ponter to function
 * * Return: size of @s
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i  = 0;

	if (array && size && cmp)
	while (i != size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
