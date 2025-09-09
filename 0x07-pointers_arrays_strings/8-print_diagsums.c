#include "main.h"
#include <stdio.h>

/**
 *print_chessboard- entry point
 *
 * @a: string that will access
 *
 *
 * * Return: size of @s
 */

void print_diagsums(int *a, int size)
{
	int sum = 0 , i , j;
	for (i = 0; i < size; i++)
	{
		sum += *(a + i + i * size);
	}
	printf("%d, " , sum);
	sum = 0;
	for (i = size - 1 , j = 0; i >= 0; i--,j++)
	{
		sum += *(a + i + j * size);
	}
	printf("%d\n" , sum);
	
}
