#include "main.h"

/**
 * leet - encode a string
 *  @s: string
 * Return: Always 0
 */
char *leet(char *s)
{
	char LETTERS[] = "aAeEoOtTlL";
	char NUMBERS[] = "4433007711";

	int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (LETTERS[j])
		{
			if (LETTERS[j] == s[i])
				s[i] = NUMBERS[j];
			j++;
		}
		i++;
	}
	return (s);
}
