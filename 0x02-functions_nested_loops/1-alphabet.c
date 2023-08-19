#include "main.h"

/**
 * main - entry point
 *
 * * Description: print putchar
 *
 * * Return: 0 (Succsess)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		_putchar(c);
	_putchar('\n');
}
