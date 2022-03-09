#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function to create an array
 * @size: size of the array
 * @c: character
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (!size)
		return (NULL);

	else
	{
		array = malloc(sizeof(char) * size);
		if (!array)
			return (NULL);

		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	return (array);
}
