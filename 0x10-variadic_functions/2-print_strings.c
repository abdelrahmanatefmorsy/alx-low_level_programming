#include "variadic_functions.h"
#include <stdio.h>

/**
*print_strings - sum func
*@n: arguments
*@separator:char
*Return: sum of all
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list ptr;

	va_start(ptr, n);
	while (i < n - 1)
	{
		str = va_arg(ptr, char*);
		if (!str)
			str = "(nil)";
		if (separator)
		{
			printf("%s%s", str, separator);
		}
		else
			printf("%s", str);
		i++;
	}
	str = va_arg(ptr, char*);
	printf("%s\n", str);
	va_end(ptr);
}
