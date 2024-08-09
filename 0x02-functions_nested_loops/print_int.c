#include "main.h"
#include <stdio.h>
/**
 * print_int- entry point
 *
 *
 * * Return:void
 */

void print_int(int c)
{
    int x = 1;

    while (c / x > 0)
        x  = x * 10;
    while (x)
    {
        _putchar(((c / x) % 10) + '0');
        x = x / 10;
    }
    
}
