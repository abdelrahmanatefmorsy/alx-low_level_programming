#include "main.h"
#include <stdio.h>

/**
 *_strncpy- entry point
 *@s:agoda
 * * Return: size of @s
 */

char *string_toupper(char *s);
{
	int j;

	for (j = 0 ; s[j] != '\0' ; j++)
	{
		if (s[j] >= 'a' && s[j] <= 'z')
		{
			s[j] -= 32;
		}
	}
	return (s);
}
