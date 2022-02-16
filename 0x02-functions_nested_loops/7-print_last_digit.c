#include "main.h"

/**
	* print_last_digit - print last digit
	* of a number
	* @n: value
	* Return: Always 0 (Success)
	*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		return (-n % 10);
	}

	return (n % 10);
}
