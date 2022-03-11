#include "main.h"
#include <stdlib.h>

/**
 * calloc - replicate calloc functionality
 * @size: size of each element
 * @nmemb: number of members
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(size * nmemb);
	if (!s)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		s[i] = 0;

	return (s);
}
