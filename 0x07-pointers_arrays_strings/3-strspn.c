#include "main.h"
#include <stdio.h>

unsigned int _strspn(char *s, char *accept)
{
    int vis[1000] = {0};
    char *ptr;
    int sum = 0 , j;
    for (ptr = accept; *ptr != '\0'; ptr++)
    {
        j = *ptr;
        vis[j] = 1;
    }
    for (ptr = s; *ptr != ' ' && *ptr != '\0'; ptr++)
    {
        j = *ptr;
        if(vis[j])
            sum++;
    }
    return sum;
    
    
}   
