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
	int i = 0;

	if (*s != '\0')
	{
		i += _strlen_recursion(s + 1) + 1;
	}
	return (i);

