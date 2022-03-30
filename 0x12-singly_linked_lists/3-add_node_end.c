#include "lists.h"

/**
 * add_node_end - add node to
 * end of linked list
 * @head: linked list
 * @str: string of the node
 * Return: Always 0 (Success)
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *newnode, *lastnode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = (list_t *)malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;
	lastnode = *head;

	if (!lastnode)
	{
		*head = newnode;
		return (*head);
	}

	while (lastnode->next)
		lastnode = lastnode->next;
	lastnode->next = newnode;

	return (newnode);
}
