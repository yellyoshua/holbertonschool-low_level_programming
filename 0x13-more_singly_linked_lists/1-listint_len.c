#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list
 * Return: Always 0 (Success)
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
