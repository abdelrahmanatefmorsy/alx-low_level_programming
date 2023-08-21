#include "main.h"
#include <stdio.h>

/**
 *_strcpy- entry point
 *
 * @src: saged
 *
 * @dest: sagoda
 *
 *
 * * Return: size of @s
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i])
		i++;
	for (j = 0; j < i ; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
