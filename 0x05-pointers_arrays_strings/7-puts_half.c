#include "main.h"

/**
 *  puts_half - prints half of a string
 *  @str: text
 */
void puts_half(char *str)
{
	int i, j, k, contador, mitad_par, mitad_impar;

	contador = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		contador++;
	}
	if (contador % 2 == 0)
	{
		mitad_par = contador / 2;
		for (j = mitad_par; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		mitad_impar = ((contador - 1) / 2);
		for (k = mitad_impar + 1; str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
