#include "lists.h"

/**
 * free_listint - function to free a linked list
 * @head: pointer to the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
