#include "main.h"

/**
* binary_to_uint - fuction to convert saged to binary
* @b: string that will convert
* Return: saged
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 1, sum = 0;
	int i = 0;

	while (b[i])
		i++;
	i--;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[i] - '0') * a;
		a *= 2;
		i--;
	}
	return (sum);
}
