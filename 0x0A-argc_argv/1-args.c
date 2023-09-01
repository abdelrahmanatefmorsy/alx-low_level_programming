#include <stdio.h>

/**
 * main-entry point
 * @argc:parameter
 * @argv:array of string
 * Return: 0 successful
 */

int main(int argc, char const *argv[])
{
	(void)*argv[];
	printf("%d\n", argc - 1);
	return (0);
}
