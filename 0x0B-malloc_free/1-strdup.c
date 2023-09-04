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
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	char *c = malloc(i * sizeof(char));

	if (i == 0 || str == NULL)
		return (NULL);
	int j = 0;

	for (; j < i ; j++)
		c[j] = str[j];
	return (c);
}
