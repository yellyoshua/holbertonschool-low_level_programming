#include "lists.h"

/**
 * list_len - returns the number
 * of elements in a linked list_t list.
 * @h: linked list
 * Return: Always 0 (Success)
 */
size_t list_len(const list_t *h)
{
	size_t len_of_structure = 0;

	while (h)
	{
		h = h->next;
		len_of_structure++;
	}

	return (len_of_structure);
}
