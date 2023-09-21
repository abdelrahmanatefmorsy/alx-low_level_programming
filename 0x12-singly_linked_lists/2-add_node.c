#include "lists.h"

/**
 * add_node- print the list
 * @head: the pointer which start
 * @str: string
 * Return: 0 success
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (!ptr || !head)
		return (NULL);
	if (str)
	{
		ptr->str = str;
		if (!ptr->str)
		{
			free(ptr);
			return (NULL);
		}
		ptr->len = _strlen(ptr->str);
	}
	ptr->next = head;
	/**head = ptr;*/
	return (ptr);
}
