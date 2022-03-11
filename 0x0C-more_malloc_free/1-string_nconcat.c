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
	int i;
	char *concat;
	unsigned int j,
			len1 = 0,
			len2 = 0;

	if (!s1 || !s2)
		return (NULL);

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

	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];

	if (n >= len2)
	{
		for (j = 0; s2[j]; j++)
			concat[i + j] = s2[j];
	}
	else
	{
		for (j = 0; j < n; j++)
			concat[i + j] = s2[j];
	}

	concat[i + j] = '\0';

	return (concat);
}
