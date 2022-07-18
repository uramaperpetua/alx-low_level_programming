#include "lists.h"

/**
 * free_listint_safe - function to free loop linked list
 * @h: pointer to the list
 *
 * Return: size of the list freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t i;
	int diff;

	if (!h || !*h)
		return (0);

	while (*h != NULL)
	{
		diff = (*h) - (*h)->next;

		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			i++;
		}
		else
		{
			free(*h);
			i++;
			break;
		}
	}

	*h = NULL;

	return (i);
}
