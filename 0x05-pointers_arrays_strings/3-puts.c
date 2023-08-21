#include "main.h"
#include <stdio.h>

/**
 * _puts- entry point
 *
 * @str: saged
 *
 *
 * * Return: size of @s
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
		printf("%c", *str);
	printf("\n");
}
