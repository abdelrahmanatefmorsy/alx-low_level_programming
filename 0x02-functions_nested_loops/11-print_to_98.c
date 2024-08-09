#include "main.h"
#include <stdio.h>

/**
 * print_int- entry point
 *@c: p1
 *
 * * Return:void
 */

void print_int(int c)
{
	int x = 1;
	while (c / x > 0)
		x  = x * 10;
	while (x > 0)
	{
		x = x / 10;
		if (x)
			_putchar(((c / x) % 10) + '0');
	}
	if (c == 0)
		_putchar('0');
}

/**
 * print_to_98- entry point
 *
 * @n: p1
 *
 * * Return: void
 */

void print_to_98(int n)
{
	int x;

	while (n < 98)
	{
		x = n;
		if (n < 0)
		{
			x = n * -1;
			_putchar('-');
		}
		print_int(x);
		_putchar(',');
		_putchar(' ');
		n = n + 1;
	}
	while (n > 98)
	{
		x = n;
		if (n < 0)
		{
			x = n * -1;
			_putchar('-');
		}

		print_int(x);
		_putchar(',');
		_putchar(' ');
		n = n - 1;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
