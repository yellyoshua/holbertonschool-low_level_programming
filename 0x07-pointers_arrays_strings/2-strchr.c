#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: arr of characters
 * @c: character to find
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}

	return (s);
}
