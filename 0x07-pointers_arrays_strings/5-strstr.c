#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0,
			j = 0;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (!needle[j])
		{
			return (&haystack[i]);
		}
	}
	return ('\0');
}
