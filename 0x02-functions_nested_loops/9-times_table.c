#include "main.h"

/**
	*	times_table - prints multiplication table
	* Return: Always 0 (Success)
	*/
void times_table(void)
{
	int rows;
	int cols;
	int result;

	for (rows = 0; rows < 10; rows++)
	{
		for (cols = 0; cols < 10; cols++)
		{
			result = cols * rows;

			if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

			if (result < 10)
			{
				_putchar(result + '0');
			}
			if (!(cols + 1 == 10))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
