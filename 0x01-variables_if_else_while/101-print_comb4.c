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
    int k;
    for (i = 0; i <=9; i++)
    {
        for (j  = i + 1; j<=9; j   ++)
        {
            for (k = j + 1; k <=9; k++)
            {
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');
                if(i != 7 || j!= 8 || k!=9)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
            

        }
        
    }
	putchar('\n');
    return (0);
}