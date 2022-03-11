#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: type char str.
 * @s2: type char str
 * @n: size in bytes of s2
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		concat = malloc(sizeof(char) * (len1 + n + 1));
	else
		concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);
	while (i < len1)
	{
		concat[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
		concat[i++] = s2[j++];
	while (n >= len2 && i < (len1 + len2))
		concat[i++] = s2[j++];
	concat[i] = '\0';
	return (concat);
}
