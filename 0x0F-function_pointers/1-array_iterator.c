#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iterator- entry point
 * @array: saged
 *@size:sagoda
 *@action :ponter to function
 * * Return: size of @s
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i  = 0;

	if (array && size && action)
	while (i != size)
	{
		action(array[i]);
		i++;
	}
}
