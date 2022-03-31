#include "lists.h"

/**
 * getByIndexRecursive - get node by index recursive
 * @head: linked list
 * @index: node index to search
 * @currentIndex: active node index
 * Return: Always 0 (Success)
 */
listint_t *getByIndexRecursive(listint_t *head, int index, int currentIndex)
{
	if (!head)
	{
		return (NULL);
	}

	if (currentIndex == index)
	{
		return (head);
	}

	return (getByIndexRecursive(head->next, index, currentIndex + 1));
}

/**
 * get_nodeint_at_index - get node by index
 * @head: linked list
 * @index: node index to search
 * Return: Always 0 (Success)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
	{
		return (NULL);
	}

	return (getByIndexRecursive(head, (int)index, 0));
}
