#include "lists.h"

/**
 * print_list- print the list
 * @h: the pointer which start
 * Return: 0 success
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *count = h;
	int  i = 0;

	if (h == NULL)
		return (0);
	while (count != NULL)
	{
		printf("%d\n", count->n);
		count = count->next;
		i++;
	}
	return (i);
}
