#include "main.h"
#include <stdio.h>

/**
 * print_last_digit- entry point
 *
 * @n: saged
 *
 * * Return: 0
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	n = n % 10;
	return (n);
}
