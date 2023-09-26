#include "lists.h"

/**
 * free_listint - print the list
 * @head: the pointer which start
 * Return: 0 success
 */
void free_listint(listint_t *head)
{
	listint_t *count, *h;

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
