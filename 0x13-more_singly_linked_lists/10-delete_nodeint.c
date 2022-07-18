#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete node
 * @head: pointer to list
 * @index: position of element
 *
 * Return: on success 1 on failure -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;

	listint_t *prev = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = temp->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	prev = temp->next;
	temp->next = prev->next;
	free(prev);

	return (1);
}
