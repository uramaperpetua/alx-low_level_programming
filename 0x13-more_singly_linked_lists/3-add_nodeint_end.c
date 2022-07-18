#include "lists.h"

/**
 * add_nodeint_end - function to add node at the end
 * @head: pointer to the first side of the node
 * @n: parameter of the list
 *
 * Return: elements of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	listint_t *temp;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}
