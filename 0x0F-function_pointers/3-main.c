#include "3-calc.h"

/**
 * main- main func
 * @argc : number of arguments
 * @argv : array of agum
 * Descreption : return write process
 * Return: 0 success
  */
int main(int argc, char **argv)
{
	int (*po)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	po = get_op_func(argv[2]);
	if (!po)
		printf("Error\n"), exit(99);
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);
	printf("%d\n", po(a, b));
	return (0);
}
