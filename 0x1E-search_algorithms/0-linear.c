#include "search_algos.h"
/**
 * linear_search- entry point
 *@array: p1
 *@size: p2
 *@value: p3
 * * Return:void
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i  = 0;

	if (size == 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
