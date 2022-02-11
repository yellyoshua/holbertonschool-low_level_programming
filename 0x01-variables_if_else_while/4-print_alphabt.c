#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		if (character != 'e' && character != 'q')
		{
			putchar(character);
		}
		character++;
	}
	putchar('\n');
	return (0);
}
