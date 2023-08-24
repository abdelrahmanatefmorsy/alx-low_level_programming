#include "main.h"
#include <stdio.h>

/**
 *cap_string- entry point
 *@str:agoda
 * * Return: size of @s
 */

char *cap_string(char *str)
{
	int j;

	for (j = 0 ; str[j] != '\0' ; j++)
	{
		if (str[j] >= 'a' && str[j] <= 'z' && (str[j - 1] == ',' || str[j - 1] == ';'
		|| str[j - 1] == '.' || str[j - 1] == '!' || str[j - 1]
		== '"' || str[j - 1] == '(' || str[j - 1] == ')' || str[j - 1]
		== '{' || str[j - 1] == '}' || str[j - 1] == ' ' || str[j - 1] ==
		'\n' || str[j - 1] == '\t' || j == 0))
		{
			str[j] -= 32;
		}
	}
	return (str);
}
