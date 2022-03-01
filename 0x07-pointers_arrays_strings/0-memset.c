#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @b:
 * @n:
 * Returns: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
}
