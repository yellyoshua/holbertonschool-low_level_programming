#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: arr to copy
 * @src: arr for copy
 * @n: n slices to copy
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
