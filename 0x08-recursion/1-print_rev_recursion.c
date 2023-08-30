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
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
