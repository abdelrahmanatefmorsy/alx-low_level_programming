#include <stdio.h>
#include <stdlib.h>

/**
 * main-entry point
 * @argc:parameter
 * @argv:array of string
 * Return: 0 successful
 */

int main(int argc, char const *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc] ; *c ; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
