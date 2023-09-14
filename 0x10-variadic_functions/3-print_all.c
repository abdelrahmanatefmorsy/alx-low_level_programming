#include "variadic_functions.h"
#include <stdio.h>

/**
*print_all - sum func
*@format: arguments
*@*:hello
*@...: arg
*Return: sum of all
*/

void print_all(const char * const format, ...)
{
	va_list ptr;
	int n = 0, i = 0;
	char *mid = ", ";
	char *str;

	va_start(ptr, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			mid = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(ptr, int), mid);
			break;
		case 'i':
			printf("%d%s", va_arg(ptr, int), mid);
			break;
		case 'f':
			printf("%f%s", va_arg(ptr, double), mid);
			break;
		case 's':
			str = va_arg(ptr, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, mid);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(ptr);
}
