#include "main.h"

/** print_sign - switch values
	*	@n: value
	*	Return: Always 0 (Success)
	*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
}
