#include "lists.h"

/**
 * list_len - print the list
 * @h: the pointer which start
 * Return: 0 success
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *count = h;

	if (h == NULL)
		return (0);
	while (count != NULL)
	{
		count = count->next;
		i++;
	}
	return (i);
}
