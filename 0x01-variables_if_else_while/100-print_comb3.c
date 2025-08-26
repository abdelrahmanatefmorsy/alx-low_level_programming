#include <stdio.h>


/**
 * main - entry point
 *
 * Description: putchar
 *
 * Return: 0 (Success)
*/
int main()
{
    int i;
    int j;
    for (i = 0; i <=9; i++)
    {
        for (j  = i + 1; j<=9; j   ++)
        {
            putchar(i + '0');
            putchar(j + '0');
            if(i != 8 || j!= 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
        
    }
	putchar('\n');
    
}