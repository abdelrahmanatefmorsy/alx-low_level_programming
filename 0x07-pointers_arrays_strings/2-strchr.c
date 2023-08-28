#include "main.h"
#include <stdio.h>

/**
 *_strchr- entry point
 *
 * @s: string that will access
 * @c: the length that will replace
 *
 *
 * * Return: size of @s
 */

char *_strchr(char *s, char c);
{
	unsigned int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
