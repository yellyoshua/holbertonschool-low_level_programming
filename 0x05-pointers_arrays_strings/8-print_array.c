#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: arr of nums
 * @n: # elements to print
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
}
