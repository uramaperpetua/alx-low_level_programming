#include "lists.h"

/**
 * get_nodeint_at_index - function to get node at index
 * @head: pointer to the list
 * @index: position of elements
 *
 * Return: On success head node data(n)
 * On failure 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	temp = head;

	while (temp && count < index)
	{
		count++;
		temp = temp->next;
	}
	return (temp);
}
