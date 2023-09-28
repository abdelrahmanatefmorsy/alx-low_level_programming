#include "main.h"

/*
*binary_to_uint - fuction to convert saged to binary
* @b: string that will convert
*Return: saged
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 1, i = 0, sum = 0;

	while (b[i])
		i++;
	i--;
	for (i; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (NULL);
		sum += (b[i] - '0') * a;
		a *= 2;
	}
	return (sum);
}
