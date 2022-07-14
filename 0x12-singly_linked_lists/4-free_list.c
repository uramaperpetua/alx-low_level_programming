#include "lists.h"

/**
 *free_list - Frees a list
 *@head: A pointer to the list head
 *
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;
	while (head != NULL)

	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
