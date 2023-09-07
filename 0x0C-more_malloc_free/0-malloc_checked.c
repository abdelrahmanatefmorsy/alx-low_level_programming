#include "main.h"

/**
 * malloc_checked-entry point
 * @b:parameter
 * Return: m successful
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
