#include "lists.h"

/**
 * free_list - free enterely linked list
 * @head: linked list
 * Return: Always 0 (Success)
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
