#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *argstostr- Concat args
 *@ac :size of args
 * @av: arguments
 * * Return: string ave args 
 */

char *argstostr(int ac, char **av)
{
	int i , sz;
	char *j;
	char * ptr = NULL;
	if(ac == 0 || av == NULL)
		return NULL;
	sz = 0;
	for (i = 0; i <ac; i++)
	{
		for(j = av[i]; *j != '\0' ;j++)
			sz++;
		sz++;
	}
	ptr = malloc(sz + 1);
	if(ptr == NULL)
		return NULL;
	sz = 0;
	for (i = 0; i <ac; i++)
	{
		for(j = av[i]; *j != '\0' ;j++)
				ptr[sz++] = *j;
		ptr[sz++] = '\n';
	}
	ptr[sz] = '\0';
	return ptr;
}
