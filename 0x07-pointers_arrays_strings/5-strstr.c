#include "main.h"
#include <stdio.h>

/**
 *_strchr- entry point
 *
 * @s: string that will access
 * @c: the length that will replace
 *
 *
 * * Return: size of @s
 */
	char *_strstr(char *haystack, char *needle)
{    int sizes = 0 , sizeac = 0 , i , j , k;
    char *ptr;
    for(ptr = haystack ; *ptr != '\0' ;ptr++)
        sizes++;
    for(ptr = needle ; *ptr != '\0' ;ptr++)
        sizeac++;
    for (i = 0; i < sizes; i++)
    {
        k = 0;
        for (j = i; j <i + sizeac && j <sizes; j++)
        {
            if(needle[k] == haystack[j])
                k++;
            else
                break;
        }
        if(k == sizeac)
            return (haystack + i);
    }
    return NULL;
}
