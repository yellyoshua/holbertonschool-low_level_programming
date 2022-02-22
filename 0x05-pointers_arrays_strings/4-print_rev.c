#include "main.h"

/**
	* print_rev - print rev text
	*	@s: text
	*/
void print_rev(char *s)
{
	int iterator;
	int textLenght;
	int revIterator;

	textLenght = 0;
	for (iterator = 0; s[iterator] != '\0'; iterator++)
	{
		textLenght++;
	}

	for (revIterator = textLenght; revIterator >= textLenght; revIterator--)
	{
		_putchar(s[revIterator]);
	}
	_putchar('\n');
}
