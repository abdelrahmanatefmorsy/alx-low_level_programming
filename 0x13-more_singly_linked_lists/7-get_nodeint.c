#include "lists.h"

/**
 * get_nodeint_at_index - print the list
 * @head: the pointer which start
 * @index: the index
 * Return: 0 success
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *count;
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
