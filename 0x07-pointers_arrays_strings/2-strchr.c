#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: arr of characters
 * @c: character to find
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}