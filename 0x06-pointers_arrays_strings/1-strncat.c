#include "main.h"

/**
 * _strncat - concat strings with lenght limit
 * @dest: text
 * @src: text
 * @n: lenght text
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	c = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		c++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[c + i] = src[i];
		}
		else
		{
			break;
		}
	}
	dest[c + i] = '\0';

	return (dest);
}
