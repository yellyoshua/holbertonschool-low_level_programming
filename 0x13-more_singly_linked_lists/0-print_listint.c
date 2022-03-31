#include "lists.h"

/**
 * print_listint - prints the elements of a linked list
 * @h: linked list
 * Return: Always 0 (Success)
 */
size_t print_listint(const listint_t *h)
{
	size_t len;

	len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
