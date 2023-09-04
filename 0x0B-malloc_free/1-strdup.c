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

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	c = malloc(i * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (; j < i ; j++)
		c[j] = str[j];
	return (c);
}
