#include "lists.h"

/**
 * dlistint_len - print the list
 * @h: the pointer which start
 * Return: 0 success
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *count = h;

	if (h == NULL)
		return (0);
	while (count != NULL)
	{
		count = count->next;
		i++;
	}
	return (i);
}
