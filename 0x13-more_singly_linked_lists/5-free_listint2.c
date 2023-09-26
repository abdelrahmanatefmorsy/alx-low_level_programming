#include "lists.h"

/**
 * free_listint2 - print the list
 * @head: the pointer which start
 * Return: 0 success
 */
void free_listint2(listint_t **head)
{
	listint_t *count, **h;

	if (!head)
		return;
	h = head;
	while (*head != NULL)
	{
		count = *head;
		free(count);
		*head = (*head)->next;
	}
	*h = NULL;
}
