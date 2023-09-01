#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main-entry point
 * @argc:parameter
 * @argv:array of string
 * Return: 0 successful
 */

int main(int argc, char const *argv[])
{
	int i = 1;
	int sum = 0;

	while (i < argc)
	{
		char *c;

		for (c = argv[i] ; *c ; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
