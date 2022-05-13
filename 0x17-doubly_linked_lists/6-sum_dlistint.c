#include "lists.h"

/**
 * sum_dlistint - Sums the values of a dlistint_t list
 * @head: Pointer to the first element of the list.
 *
 * Return: The sum of the values of the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
