#include "main.h"

/**
* clear_bit - fuction to convert saged to binary
* @n: string that will convert
* @index: the insex we want
* Return: saged
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long x = 1;

	if (index > 63)
		return (-1);
	*n = *n & (~(x << index));
		return (1);
}
