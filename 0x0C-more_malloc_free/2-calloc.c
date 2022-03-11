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
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(size * nmemb);
	if (!s)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		s[i] = 0;

	return (s);
}
