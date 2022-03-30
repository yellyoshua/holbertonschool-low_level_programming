#include "lists.h"

/**
 * print_list - function that prints all
 * the elements of a list_t list.
 * @h: linked list
 * Return: Always 0 (Success)
 */
size_t print_list(const list_t *h)
{
	size_t len_of_structure = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		len_of_structure++;
	}
	return (len_of_structure);
}
