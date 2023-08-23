#include "main.h"
#include <stdio.h>

/**
 *_strncat- entry point
 *
 * @dest: saged
 *@src:sagoda
 *@n:aboelsagage
 * * Return: size of @s
 */

char *_strncat(char *dest, char *src, int n)
{
	int j;
	int i = 0;

	while (dest[i])
	{
		i++;
	}
	for (j = 0 ; src[j] && j < n ; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
