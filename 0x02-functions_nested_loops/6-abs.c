#include "main.h"
#include <stdio.h>

/**
 * _abs- entry point
 *
 * @n: saged
 *
 * * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
