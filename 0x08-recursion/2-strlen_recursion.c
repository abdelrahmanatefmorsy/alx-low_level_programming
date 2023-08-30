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

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
