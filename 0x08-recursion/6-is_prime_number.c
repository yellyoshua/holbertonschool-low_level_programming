#include "main.h"

/**
 * prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 * Return: Always 0 (Success)
 */
int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}

	if (n % i == 0 && i > 0)
	{
		return (0);
	}

	return (prime(n, i - 1));
}

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
