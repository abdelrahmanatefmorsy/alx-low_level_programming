#include "main.h"
#include <stdio.h>

/**
 *_sqrt_recursion- entry point
 *@n:pow
 * * Return: size of @s
 */

int _sqrt_recursion(int n)
{
	return (_square(n, 1));
}

/**
 * _square- find sq
 * @n:number
 * @t:value
 * Return: 1;
 */

int _square(int n, int t)
{
	if (t == n)
	{
		return (-1);
	}
	if (t * t == n)
	{
		return (t);
	}
	_square(n, t + 1);
}
