#include "lists.h"

/**
 * print_list- print the list
 * @h: the pointer which start
 * Return: 0 success
 */
size_t print_list(const list_t *h)
{
	const list_t *count = h;
	int  i = 0;

	if (h == NULL)
		return (0);
	while (count != NULL)
	{
		if (!count->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", count->len, count->str);
		count = count->next;
		i++;
	}
	return (i);
}
