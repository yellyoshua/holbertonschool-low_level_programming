#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i, j;

	n = n - 1;
	for (i = 0; i <= n;)
	{
		j = a[i];
		a[i++] = a[n];
		a[n--] = j;
	}
}
