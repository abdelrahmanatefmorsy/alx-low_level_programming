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

	for (int i = 0 ; i < 8 ; i++)
		_putchar(c[i]);
	return (0);
}
