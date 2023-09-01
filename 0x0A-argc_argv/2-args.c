#include <stdio.h>

/**
 * main-entry point
 * @argc:parameter
 * @argv:array of string
 * Return: 0 successful
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	int i;

	while (argv[i] != '\0')
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
