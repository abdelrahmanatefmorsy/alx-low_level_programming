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
 * times_table- entry point
 *
 * * Return: void
 */

void times_table(void)
{
	int x = 0;
	int i;

	while (x < 10)
	{
		for (i = 0; i < 10; i++)
		{
			print_int((i * x));
			if (i == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		x = x + 1;
	}
}
