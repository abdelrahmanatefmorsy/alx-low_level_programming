#include "main.h"
#include <stdio.h>


/**
 * jack_bauer- entry point
 *
 *
 * * Return: void
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	while (hours < 24)
	{
		_putchar((hours / 10) + '0');
		_putchar((hours % 10) + '0');
		_putchar(':');
		_putchar((minutes / 10) + '0');
		_putchar((minutes % 10) + '0');
		_putchar('\n');
		minutes = minutes + 1;
		if (minutes == 60)
		{
			minutes = 0;
			hours = hours + 1;
		}
	}
}
