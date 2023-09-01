#include "main.h"
#include <stdio.h>

/**
 * _strlen- entry point
 *
 * @s: saged
 *
 *
 * * Return: size of @s
 */

int _strlen(char *s)
{
	int p;

	for (p = 0; *s != '\0'; s++)
		p++;
	return (p);
}
