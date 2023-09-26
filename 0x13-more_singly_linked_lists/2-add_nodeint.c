#include "lists.h"

/**
 * add_nodeint - give size of lists
 * @head: the head pointer
 * @n:the value of node
 * Return: size of list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *cnt;

	cnt = malloc(sizeof(listint_t));
	if (!cnt)
		return (NULL);
	cnt->n = n;
	cnt->next = *head;
	*head = cnt;
	return (cnt);
}
