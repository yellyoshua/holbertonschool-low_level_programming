#include "main.h"

/**
 * _strspn - length of a prefix substring
 * @s: string to evaluate
 * @accept: characters to match in s
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0,
			j = 0,
			f = 0,
			flag = 0;

	for (; s[i]; i++)
	{
		flag = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				f++;
			}
		}

		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
