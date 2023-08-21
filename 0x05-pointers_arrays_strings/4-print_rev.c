#include "main.h"
#include <stdio.h>

/**
 *print_rev- entry point
 *
 * @s: saged
 *
 *
 * * Return: size of @s
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	i--;
	for (; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
