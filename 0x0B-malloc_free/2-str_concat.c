#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat- entry point
 *@s1 :sagoda
 * @s2: saged
 * * Return: size of @s
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, i1 = 0, j1 = 0;
	char *c;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[i1] != '\0')
		{
			i1++;
		}
	}
	c = malloc((i + i1 + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (; j < i ; j++)
		c[j] = s1[j];
	for (; j1 < i1 ; j1++)
		c[j1] = s2[j1];
	return (c);
}
