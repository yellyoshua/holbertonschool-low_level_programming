#include "lists.h"

/**
 * pop_listint - remove and free master node
 * and return "n" property
 * @head: linked list
 * Return: Always 0 (Success)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *children, *temp;

	if (!(*head))
		return (0);

	temp = *head;
	children = (*head)->next;
	*head = children;

	n = temp->n;

	free(temp);

	return (n);
}
