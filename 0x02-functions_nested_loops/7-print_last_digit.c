#include "main.h"

/**
	* print_last_digit - print last digit
	* of a number
	* @n: value
	* Return: Always 0 (Success)
	*/
int print_last_digit(int n)
{
	int result;

	if (n < 0)
		n = -n;

	result = n % 10;

	if (result < 0)
		result = -result;

	_putchar(result + '0');

	return (result);
}
