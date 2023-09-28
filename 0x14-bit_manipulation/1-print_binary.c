#include "main.h"

/**
* binary_to_uint - fuction to convert saged to binary
* @b: string that will convert
* Return: saged
*/

void print_binary(unsigned long int n)
{
	unsigned long int count = 1ul << 63;
	char c = '0';

	while (!(count & n) && count != 0)
		count = count >> 1;

	if (count == 0)
		_putchar('0');

	while (count)
	{
		if (count & n)
			c = '1';
		else
			c = '0';
		_putchar(c);
		count = count >> 1;
	}
}
