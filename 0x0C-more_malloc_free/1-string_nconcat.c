#include "main.h"

/**
*string_nconcat-entry point
*@s1 : pointer to first
*@s2: pointer to second string
*@n:size
* Return: m successful
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, a;
	int *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	m = malloc(a + n + 1);
	if (m == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		m[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		m[i] = s2[j];
		i++;
	}
	m[i] = '\0';
	return (m);
}
