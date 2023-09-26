#include "lists.h"

/**
 * sum_listint - give size of lists
 * @head: the head pointer
 * Return: size of list
 */

int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *count = head;

	if (head == NULL)
		return (0);
	while (count != NULL)
	{
		i += count->n;
		count = count->next;
	}
	return (i);
}
