#include "variadic_functions.h"

/**
*sum_them_all - sum func
*@n: arguments
*Return: sum of all
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	while (i < n)
	{
		sum += va_arg(ptr, int);
		i++;
	}
	va_end(ptr);
	return (sum);
}
