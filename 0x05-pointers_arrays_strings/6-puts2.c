#include "main.h"
#include <stdio.h>

/**
 *puts2- entry point
 *
 * @str: saged
 *
 *
 * * Return: size of @s
 */

void puts2(char *str)
{
	int i = 0;
	int j;

	while (str[i])
		i++;
	for (j = 0; j < i ; j += 2)
	{
		printf("%c", str[j]);
	}
	printf("\n");
}
