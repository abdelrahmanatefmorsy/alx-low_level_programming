#include "lists.h"

/**
 * add_dnodeint - give size of lists
 * @head: the head pointer
 * @n:the value of node
 * Return: size of list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *cnt;

	cnt = malloc(sizeof(dlistint_t));
	if (!cnt)
		return (NULL);
	cnt->n = n;
	cnt->prev = NULL;
	if (!(*head))
	{
		cnt->next = NULL;
		*head = cnt;
	}
	else
	{
		cnt->next = *head;
		(*head)->prev = cnt;
		*head = cnt;
	}
	return (cnt);
}
