#include "main.h"
#include <stdio.h>

/**
 * _square- find sq
 * @n:number
 * @i:value
 * @s:gaded
 * Return: 1;
 */

int _square(char *s, int i, int n)
{
	if (i == -1)
	{
		return (1);
	}
	if (s[i] != s[n])
	{
		return (0);
	}
	return (_square(s, i - 1, n + 1));
}

/**
 *_oindex- entry point
 *@s:pow
 * * Return: size of @s
 */

int _oindex(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i +=  _oindex(s + 1) + 1;
	}
	return (i);
}

/**
 *is_palindrome- entry point
 *@s:pow
 * * Return: size of @s
 */

int is_palindrome(char *s)
{
	return (_square(s, _oindex(s) - 1, 0));
}
