#include "main.h"
#include <stdio.h>

/**
 * _square- find sq
 * @n:number
 * @t:value
 * Return: 1;
 */

int _square(int n, int t)
{
	if (n == 2)
	{
		return (1);
	}
	if (n % t == 0 || n == 1)
	{
		return (0);
	}
	if (t * t >= n)
	{
		return (1);
	}
	return (_square(n, t + 1));
}

/**
 *is_prime_number;- entry point
 *@n:pow
 * * Return: size of @s
 */

int is_prime_number(int n)
{
	return (_square(n, 2));
}
