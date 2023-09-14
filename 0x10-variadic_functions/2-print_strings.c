#include "variadic_functions.h"
#include <stdio.h>

/**
*print_strings - sum func
*@n: arguments
*@separator:char
*@...: arg
*Return: sum of all
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list ptr;

	va_start(ptr, n);
	while (i < n)
	{
		str = va_arg(ptr, char*);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && i < n - 1)
		printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ptr);
}
