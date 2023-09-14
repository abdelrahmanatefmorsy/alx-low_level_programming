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

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	while (i < n - 1)
	{
		str = va_arg(ptr, char*);
		if (str == NULL || *str == 0)
			str = "(nil)";
		if (!separator)
		separator = "";
		printf("%s%s", str, separator);
		i++;
	}
	str = va_arg(ptr, char*);
	printf("%s\n", str);
	va_end(ptr);
}
