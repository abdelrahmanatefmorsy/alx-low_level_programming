#include "lists.h"

/**
 * listint_len - give size of lists
 * @h: the head pointer
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *count = h;

	if (h == NULL)
		return (0);
	while (count != NULL)
	{
		count = count->next;
		i++;
	}
	return (i);
}
