#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
 */

unsigned int _length(char *str)
{
	unsigned int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - function to add node at the end of the list
 * @head: pointer to the head of the list
 * @str: pointer to the string
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = (list_t *) malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _length(new->str);
	new->next = NULL;


	if (*head == NULL)
	{
		*head = new;
		return (new);
	}


	temp = *head;


	while (temp != NULL && temp->next != NULL)
		temp = temp->next;


	temp->next = new;

	return (new);
}
