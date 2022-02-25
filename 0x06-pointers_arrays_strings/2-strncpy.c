#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: destination
 * @src: pointer
 * @n: number of bytes
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j]; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
