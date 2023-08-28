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

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
