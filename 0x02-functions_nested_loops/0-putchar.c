#include "main.h"

/**
 * main - entry point
 *
 * * Description: print putchar
 *
 * * Return: 0 (Succsess)
 */

int main(void)
{
	char c[] = "_putchar";

	int i;

	for (i = 0 ; i < 9 ; i++)
		_putchar(c[i]);
	_putchar('\n');
	return (0);
}
