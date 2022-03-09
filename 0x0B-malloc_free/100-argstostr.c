#include "main.h"
#include <stdlib.h>

/**
 * sumMatriz - return a length of a matriz
 * @ac: count
 * @av: vector
 * Return: Always 0 (Success)
 */
int sumMatriz(int ac, char **av)
{
	int c = 0,
			i = 0,
			j = 0;

	for (; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	return (c);
}

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: count
 * @av: vector
 * Return: Always 0 (Success)
 */
char *argstostr(int ac, char **av)
{
	char *out;
	int c = 0,
			i = 0,
			j = 0,
			ia = 0;

	if (ac == 0)
		return (NULL);

	c = sumMatriz(ac, av);

	out = malloc((c + 1) * sizeof(char));

	if (out == NULL)
	{
		free(out);
		return (NULL);
	}

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
