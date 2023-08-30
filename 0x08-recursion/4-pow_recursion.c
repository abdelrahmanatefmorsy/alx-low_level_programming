#include "main.h"
#include <stdio.h>

/**
 *_pow_recursion- entry point
 *
 * @x:number
 *@y:pow
 *
 * * Return: size of @s
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
