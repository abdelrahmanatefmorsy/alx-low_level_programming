#include "main.h"

/**
 * swap_int- entry point
 *
 * @a: saged
 *
 * @b: sagoda
 *
 * * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
