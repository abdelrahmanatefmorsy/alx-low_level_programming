#include "main.h"
#include <stdio.h>

/**
 *_memset- entry point
 *
 * @s: string that will access
 * @b: the character that will remove
 * @n: the length that will replace
 *
 *
 * * Return: size of @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; n > 0 ; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
