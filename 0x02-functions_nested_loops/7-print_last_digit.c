#include "main.h"
#include <stdio.h>

/**
 * print_last_digit- entry point
 *
 * @x: saged
 *
 * * Return: 0
 */

int print_last_digit(int x)
{
	long n = x;

	if (n < 0)
		n = n * -1;
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
