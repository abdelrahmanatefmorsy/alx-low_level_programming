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

char *_strpbrk(char *s, char *accept)
{
    int vis[1000] ={0};
        char *ptr;
        int  j;
        for (ptr = accept; *ptr != '\0'; ptr++)
        {
            j = *ptr;
            vis[j] = 1;
        }
        for (ptr = s; *ptr != ' ' && *ptr != '\0'; ptr++)
        {
            j = *ptr;
            if(vis[j])
                return ptr;
        }
        return NULL;
    
}
