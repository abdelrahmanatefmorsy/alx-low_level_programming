#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Generates random valid passwords for the program 101-crackme.
 *
 * description: finds checksum value from objdump
 *
 * Return: 0
 */



int main()
{
    char c[40];
    c[0] = 'X';
    for (int i = 1; i <=22; i++)
    {
        c[i] = 'z';
    }
    c[23] = '\0';
    printf("%s" ,c);
    
}
