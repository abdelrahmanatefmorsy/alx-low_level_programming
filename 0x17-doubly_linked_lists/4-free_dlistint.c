#include "lists.h"

/**
 * free_dlistint - print the list
 * @head: the pointer which start
 * Return: 0 success
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *count, *h;

	if (!head)
		return;
	count = head;
	while (count != NULL)
	{
		h = count->next;
		free(count);
		count = h;
	}
}
