#include "lists.h"

/**
 * add_nodeint_end - give size of lists
 * @head: the head pointer
 * @n:the value of node
 * Return: size of list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *cnt;

	ptr = *head;
	cnt = malloc(sizeof(listint_t));
	if (!cnt)
		return (NULL);
	cnt->n = n;
	cnt->next = NULL;
	if (ptr == NULL)
	{
		*head = cnt;
		return (cnt);
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = cnt;
	return (cnt);
}
