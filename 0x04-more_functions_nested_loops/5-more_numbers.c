#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 *
 */
void more_numbers(void)
{
	int n;

	int count;

	count = 0;

	while (count < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10 + '0');
		}

		count++;
	}
	_putchar('\n');
}
