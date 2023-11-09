#include "lists.h"

/**
 * get_dnodeint_at_index - print the list
 * @head: the pointer which start
 * @index: the index
 * Return: 0 success
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *count;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	count = head;
	while (i < index)
	{
		if (!count->next)
			return (NULL);
		count = count->next;
		i++;
	}
	return (count);
}
