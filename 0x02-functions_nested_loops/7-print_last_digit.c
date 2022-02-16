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
	{
		result = -n % 10;
		_putchar(result + '0');

		return (result);
	}
	result = n % 10;
	_putchar(result + '0');

	return (result);
}
