#include "main.h"
#include <stdio.h>

/**
 *rev_string- entry point
 *
 * @s: saged
 *
 *
 * * Return: size of @s
 */

void rev_string(char *s)
{
	int i;

	while (s[i])
	{
		i++;
	}
	char l;

	int j;

	for (j = 0 ; j < i / 2 ; j++)
	{
		l = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = l;
	}
}
