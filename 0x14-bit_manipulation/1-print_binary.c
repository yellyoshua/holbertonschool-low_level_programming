#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int bit, i;

	bit = (sizeof(n) * 8) - 1;
	i = 0;

	for (; bit >= 0; bit--)
	{
		if ((n >> bit) & 1)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar('0');
	}
	if (i == 0)
		_putchar('0');
}
