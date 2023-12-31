#include "lists.h"

/**
 * free_listint2 - print the list
 * @head: the pointer which start
 * Return: 0 success
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	if (!head)
		return;
	h = *head;
	while (h != NULL)
	{
		h = h->next;
		free(*head);
		*head = h;
	}
	*head = NULL;
}
