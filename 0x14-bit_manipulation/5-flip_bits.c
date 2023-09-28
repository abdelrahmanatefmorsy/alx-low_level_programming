#include "main.h"

/**
* flip_bits - fuction to convert saged to binary
* @n: string that will convert
* @m: the insex we want
* Return: saged
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			count++;
		m = m >> 1;
		n = n >> 1;
	}

	return (count);

}
