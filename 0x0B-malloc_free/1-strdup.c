#include "main.h"
#include <stdlib.h>

/**
 * _strdup - funtion returns a pointer to newly allocated space in memory
 * @str: string to allocated new space in memory
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *c, *j;
	int e = 0;

	if (str == NULL)
		return (NULL);

	while (str[e])
		e++;

	c = malloc(e + 1);
	j = c;

	if (j == NULL)
		return (NULL);

	while (*str)
	{
		*j++ = *str++;
		*j = '\0';
	}

	return (c);
}
