#include "lists.h"

/**
 * reverse_listint - functiom that reverse the linked list
 * @head: pointer to the list
 *
 * Return: a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = new;
	}
	*head = prev;
	return (*head);
}
