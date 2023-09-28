#include "main.h"

/**
* get_bit - fuction to convert saged to binary
* @n: string that will convert
* @index: the insex we want
* Return: saged
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long x = 1;

	if (index > 63)
		return (-1);
	if ((n & (x << index)) > 0)
		return (1);
	else
		return (0);
}
