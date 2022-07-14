#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: returns the address to the new element or NULL
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
 * *add_node - function to add node at the beginning of a list
 * @head: first node in the list
 * @str: str to add in the list
 *
 * Return: address of the new element on success or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *) malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _length(new->str);
	new->next = *head;
	*head = new;
	return (*head);
}
