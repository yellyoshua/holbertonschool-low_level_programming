#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - A new struct type defining a printer
 * @tpar: A type of parameter printed
 * @pf: A function pointer to a function that prints
 * a type of parameter
 */

typedef struct printer
{
	char *tpar;
	void (*pf)(va_list);
} printer_tpar;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

#endif
