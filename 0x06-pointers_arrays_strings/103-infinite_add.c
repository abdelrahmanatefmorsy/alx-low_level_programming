#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers stored as strings
 * @n1: string containing the first number
 * @n2: string containing the second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result (r), or 0 if the result
 *         cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int size1, size2, i, j, rem;
	char *ptr;
	char num1[10000];
	char num2[10000];

	size1 = size2 = 0;

	/* calculate lengths */
	for (ptr = n1; *ptr != '\0'; ptr++)
		size1++;
	for (ptr = n2; *ptr != '\0'; ptr++)
		size2++;

	/* check if result can fit */
	if (size1 >= size_r || size2 >= size_r)
		return (0);

	/* reverse n1 into num1 */
	for (i = 0, j = size1 - 1; i < size1; i++, j--)
		num1[i] = n1[j];
	for (i = size1; i < size_r - 1; i++)
		num1[i] = '0';
	num1[size_r - 1] = '\0';

	/* reverse n2 into num2 */
	for (i = 0, j = size2 - 1; i < size2; i++, j--)
		num2[i] = n2[j];
	for (i = size2; i < size_r - 1; i++)
		num2[i] = '0';
	num2[size_r - 1] = '\0';

	/* perform addition */
	rem = 0;
	for (i = 0; i < size_r - 1; i++)
	{
		rem += (num1[i] - '0') + (num2[i] - '0');
		r[i] = (rem % 10) + '0';
		rem /= 10;
	}

	/* remove leading zeros in the reversed result */
	while (r[size_r - 2] == '0' && size_r > 2)
		size_r--;

	/* reverse r back */
	for (i = 0, j = size_r - 2; i < j; i++, j--)
	{
		char c = r[i];

		r[i] = r[j];
		r[j] = c;
	}
	r[size_r - 1] = '\0';

	if (rem != 0)
		return (0);
	return (r);
}
