#include "lists.h"

/**
 * add_nodeint - function to add node at the beginning
 * @head: pointer to the first node
 * @n: value of the new nodes
 *
 * Return: address of new element, or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
