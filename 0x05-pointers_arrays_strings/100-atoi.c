#include "main.h"
#include <stdio.h>

/**
 *_atoi- entry point
 *
 * @s: sagoda
 *
 *
 * * Return: size of @s
 */

int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int one = 1;
	int two = 1;

	while (s[i] != '\0')
	{
		while (s[i] >= '0' && s[i] <= '9')
		{
			if (s[i - 1] == '-')
				one = 0;
			two = 0;
			j *= 10;
			j += s[i] - '0';
			i++;
			if (s[i] == '\0')
				return (j);
		}
		if (one == 0)
			j *= -1;
		if (two == 0)
			return (j);
		i++;
	}
	return (j);
}
