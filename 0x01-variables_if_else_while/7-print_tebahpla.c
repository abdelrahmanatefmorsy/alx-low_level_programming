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
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
