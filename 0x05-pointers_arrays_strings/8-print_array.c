#include "main.h"
#include <stdio.h>

/**
 *print_array- entry point
 *
 *@a: saged
 *
 *@n:sagoda
 *
 * * Return: size of @s
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0 ; j < n ; j++)
	{
		printf("%d", a[j]);
	}
	printf("\n");
}
