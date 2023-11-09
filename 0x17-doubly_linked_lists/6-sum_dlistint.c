#include "lists.h"

/**
 * sum_dlistint - give size of lists
 * @head: the head pointer
 * Return: size of list
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *count = head;

	if (head == NULL)
		return (0);
	while (count != NULL)
	{
		i += count->n;
		count = count->next;
	}
	return (i);
}
