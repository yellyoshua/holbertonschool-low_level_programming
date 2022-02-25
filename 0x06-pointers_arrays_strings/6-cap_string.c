#include <stdio.h>

#define SEPARATORS ",;.!?\"(){} \t\n"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: Always 0
 */
char *cap_string(char *s)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		for (j = 0; SEPARATORS[j]; j++)
		{
			if ((s[i] == SEPARATORS[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z')))
			{
				s[i + 1] -= 32;
				break;
			}
		}
	}
	return (s);
}
