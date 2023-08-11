#include <stdio.h>

/**
 * main - entry point
 *
 * Description: putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		if (c != '9')
			printf(", ");
		c++;
	}
	putchar('\n');
	return (0);
}
