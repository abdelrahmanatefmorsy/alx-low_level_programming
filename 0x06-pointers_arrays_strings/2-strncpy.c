#include "main.h"
#include <stdio.h>

/**
 *_strncpy- entry point
 *
 * @dest: saged
 *@src:sagoda
 *@n:aboelsagage
 * * Return: size of @s
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0 ; j < n && src[j] != '\0' ; j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
