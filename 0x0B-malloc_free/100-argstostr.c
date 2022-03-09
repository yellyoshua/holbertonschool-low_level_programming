#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: count
 * @av: vector
 * Return: Always 0 (Success)
 */
char *argstostr(int ac, char **av)
{
	char *out;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	out = malloc((c + 1) * sizeof(char));

	if (out == NULL)
	{
		free(out);
		return (NULL);
	}

	i = 0;
	j = 0;
	ia = 0;

	for (; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			out[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}

		if (ia < c - 1)
			out[ia] = av[i][j];
	}

	out[ia] = '\0';

	return (out);
}
