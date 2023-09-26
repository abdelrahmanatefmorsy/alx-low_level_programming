#include "lists.h"

/**
 * print_listint- print the list
 * @h: the pointer which start
 * Return: 0 success
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *count = h;
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
