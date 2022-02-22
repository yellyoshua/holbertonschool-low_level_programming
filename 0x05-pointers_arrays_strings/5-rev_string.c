#include "main.h"

/**
 * rev_string - func that rev a text
 *	@s: text
 */
void rev_string(char *s)
{
	int i, j, k, l, counter;

	char c[520];

	counter = 0;
	l = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	for (j = 0; j < counter; j++)
	{
		c[counter - l] = s[j];
		l++;
	}
	for (k = 0; k < counter; k++)
	{
		s[k] = c[k];
	}
}
