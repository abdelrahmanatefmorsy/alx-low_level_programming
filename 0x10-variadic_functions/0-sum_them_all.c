#include "variadic_functions.h"

/**
*sum_them_all - sum func
*@n: arguments
*Return: sum of all
*/

int sum_them_all(const unsigned int n, ...)
{
	int i = 0, sum = 0;
	va_list ptr;

	va_start(ptr, n);
	while (i < n)
	{
		sum += va_arg(ptr, int);
		i++;
	}
	va_end(ptr);
	return (sum);
}
