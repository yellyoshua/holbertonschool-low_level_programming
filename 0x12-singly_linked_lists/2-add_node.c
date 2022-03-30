#include "lists.h"

/**
 * add_node - add node to linked list
 * @head: linked list
 * @str: string element
 * Return: Always 0 (Success)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = (list_t *)malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = *head;

	*head = new;

	return (*head);
}
