#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name- entry point
 * @name: saged
 *@f:sagoda
 * * Return: size of @s
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		(f(name));
}
