#include "main.h"
#include <stdio.h>

/**
 *_memcpy- entry point
 *
 * @src: string that will access
 * @dest: the character that will remove
 * @n: the length that will replace
 *
 *
 * * Return: size of @s
 */

char *_strchr(char *s, char c);
{
	unsigned int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
