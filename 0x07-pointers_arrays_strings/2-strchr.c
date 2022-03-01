#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: arr of characters
 * @c: character to find
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	char *f;
	int i;

	for (; s[i]; i++)
	{
		if (s[i] == c)
		{
			*f = c;
			break;
		}
	}

	return (f);
}
