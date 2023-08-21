#include "main.h"
#include <stdio.h>

/**
 *puts_half- entry point
 *
 * @str: saged
 *
 *
 * * Return: size of @s
 */

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i])
		i++;
	j = i / 2;
	for (; j < i ; j++)
	{
		printf("%c", str[j]);
	}
	printf("\n");
}
