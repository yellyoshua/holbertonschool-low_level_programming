#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: type char str.
 * @s2: type char str
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	char *pstr = NULL;
	unsigned int len;
	unsigned int x = 0,
							 y = 0,
							 z = 0,
							 zz = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
		x++;

	while (s2[y] != '\0')
		y++;

	len = x + y + 1;
	pstr = malloc(len * sizeof(char));

	if (pstr == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
		pstr[z] = s1[z];

	for (zz = 0; zz < y; z++, zz++)
		pstr[z] = s2[zz];

	pstr[len] = s2[zz];
	return (pstr);
}
