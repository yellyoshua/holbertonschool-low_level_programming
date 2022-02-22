#include "main.h"

/**
	* print_rev - print rev text
	*	@s: text
	*/
void print_rev(char *s)
{
	int iterator = 0;
	int textLenght = 0;
	int revIterator = 0;

	for (; s[iterator] != '\0'; iterator++)
	{
		textLenght++;
	}

	for (revIterator = textLenght - 1; s[revIterator] != '\0'; revIterator--)
	{
		_putchar(s[revIterator]);
	}
	_putchar('\n');
}
