#include "lists.h"

/**
 * sum_listint - function to add the data in a list
 * @head: pointer to the list
 *
 * Return: sum of data in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
