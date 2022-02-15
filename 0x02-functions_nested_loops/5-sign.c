#include "main.h"

/**
	*	print_sign - switch values
	*	@n: value
	*	Return: Always 0 (Success)
	*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
