#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup- entry point
 *
 * @str: saged
 * * Return: size of @s
 */

char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;
	char *c;

	while (str[i] != '\0')
	{
		i++;
	}
	c = malloc(i * sizeof(char));
	if (i == 0 || str == NULL || c == NULL)
		return (NULL);
	for (; j < i ; j++)
		c[j] = str[j];
	return (c);
}
