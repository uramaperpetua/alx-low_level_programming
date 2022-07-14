#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 *@h: pointer to the list
 *
 *Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *tmp;
	int count = 0;

	tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
