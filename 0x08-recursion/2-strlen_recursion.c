#include "main.h"
#include <stdio.h>

/**
 *_strlen_recursion- entry point
 *
 * @s: string that will access
 *
 *
 * * Return: size of @s
 */

int factorial(int n);
{
	if (n < 0)
	{
		return -1;
	}
	if (n == 1)
	{
		return 1;
	}
	return n * factorial(n-1);
}
