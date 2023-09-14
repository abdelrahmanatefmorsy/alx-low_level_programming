#include "variadic_functions.h"
#include <stdio.h>

/**
*print_numbers - sum func
*@n: arguments
*@separator:char
*Return: sum of all
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	while (i < n - 1)
	{
		if (separator)
		{
			printf("%d%s", va_arg(ptr, int), separator);
		}
		else
			printf("%d", va_arg(ptr, int));
		i++;
	}
	printf("%d\n", va_arg(ptr, int));
}
