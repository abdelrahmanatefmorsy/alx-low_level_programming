#include <stdio.h>

/**
 * main-entry point
 * @argc:parameter
 * @argv:array of string
 * Return: 0 successful
 */

int main(int argc, char const *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", argv[1] + argv[2]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
