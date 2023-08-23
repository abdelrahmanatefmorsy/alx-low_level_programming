#include "main.h"
#include <stdio.h>

/**
 *_strcat- entry point
 *
 * @dest: saged
 *@src:sagoda
 *
 * * Return: size of @s
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int i = 0;

	while (dest[i])
	{
		i++;
	}
	for (j = 0 ; src[j] ; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
