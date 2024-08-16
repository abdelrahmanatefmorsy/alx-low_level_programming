#include "search_algos.h"
/**
 * print_search- entry point
 *@l: p1
 *@r: p2
 *@array: array
 * * Return:void
 */

void print_search(size_t l, size_t r, int *array)
{
	size_t i = l;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i != r)
			printf(", ");
		else
			printf("\n");
	}
}
/**
 * binary_search- entry point
 *@array: p1
 *@size: p2
 *@value: p3
 * * Return:void
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l  = 0;
	size_t r = size - 1;
	size_t mid;

	if (size == 0)
		return (-1);
	while (l <= r)
	{
		print_search(l, r, array);
		mid = (l + r) / 2;
		if (array[mid] > value)
		{
			r = mid - 1;
		}
		else if (array[mid] < value)
		{
			l = mid + 1;
		}
		else
		{
			return (mid);
		}
		}
	return (-1);
}
