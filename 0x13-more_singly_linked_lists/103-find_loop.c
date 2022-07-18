#include "lists.h"

/**
 * find_listint_loop - function to find loop
 * @head: pointer to the loop
 *
 * Return: address of node it stops, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head, *f = head;

	if (!head)
		return (NULL);

	while (s && f && f->next)
	{
		s = s->next;
		f = f->next->next;

		if (s == f)
		{
			s = head;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (f);
		}
	}

	return (NULL);
}
