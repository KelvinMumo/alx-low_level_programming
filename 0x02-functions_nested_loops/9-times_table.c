#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: 0
 *
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (c < 10)
			{
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}	
		}

			_putchar('\n');
	}
}
