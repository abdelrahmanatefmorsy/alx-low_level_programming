#include "main.h"
#include <stdio.h>

/**
 * print_sign- entry point
 *
 * @n: saged
 *
 * * Return: 0 or 1 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('1');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-1');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
