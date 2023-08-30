#include "main.h"
#include <stdio.h>

/**
 *_print_rev_recursion- entry point
 *
 * @s: string that will access
 *
 *
 * * Return: size of @s
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
