#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the row of the array
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((j + 1) == 8)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
				_putchar(a[i][j]);
		}
	}
}