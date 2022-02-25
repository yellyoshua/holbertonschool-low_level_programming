#include "main.h"

/**
 * _strcat - concat strings
 * @dest: text
 * @src: text
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	c = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		c++;
	}

	for (i = 0; src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}
