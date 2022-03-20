#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by new line
 * @separator: The string to be printed between strings
 * @n: The number of params passed to the function
 * @...: array of args
 * Return: Always 0 (Success)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *tmp;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(strings, char *);
		if (tmp == NULL)
			printf("(nil)");
		else
			printf("%s", tmp);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
