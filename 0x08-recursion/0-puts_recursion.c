#include "main.h"
#include <stdio.h>

/**
 *_puts_recursion- entry point
 *
 * @s: string that will access
 *
 *
 * * Return: size of @s
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(*s + 1);
	}
}
