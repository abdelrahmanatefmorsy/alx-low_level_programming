#include "lists.h"

/**
 * add_node_end- print the list
 * @head: the pointer which start
 * @str: string
 * Return: 0 success
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	list_t *change = *head;

	if (!ptr || !head)
		return (NULL);
	if (str)
	{
		ptr->str = strdup(str);
		if (!ptr->str)
		{
			free(ptr);
			return (NULL);
		}
		ptr->len = strlen(ptr->str);
	}
	if (change)
	{
		while (change->next)
			change = change->next;
		change->next = ptr;
	}
	else
		*head = ptr;
	return (ptr);
}
