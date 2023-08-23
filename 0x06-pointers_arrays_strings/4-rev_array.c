#include "main.h"
#include <stdio.h>

/**
 *reverse_array- entry point
 *
 * @n: saged
 *@a:sagoda
 *
 * * Return: size of @s
 */

void reverse_array(int *a, int n);
{
	int j;
	int l;

	for (j = 0 ; j < n / 2 ; j++)
	{
		l = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = l;
	}
}
