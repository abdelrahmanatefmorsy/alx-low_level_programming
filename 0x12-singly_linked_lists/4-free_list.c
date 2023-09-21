#include "lists.h"

/**
 * free_list - print the list
 * @head: the pointer which start
 * Return: 0 success
 */
void free_list(list_t *head)
{
	list_t *count, h;

	if (!head)
		return;
	count = head;
	while (count != NULL)
	{
		h = count->next;
		free(count->str);
		free(count);
		count = h;
	}
}
