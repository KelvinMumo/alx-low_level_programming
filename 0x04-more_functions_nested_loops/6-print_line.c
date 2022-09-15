#include "main.h"

/**
 * print_line - Prints the character _ n times
 *
 * @n: number of times the character _ should be printed
 *
 * Return: void
 *
 */
void print_line(int n)
{
	int a;

	
	for (a = 0; a <= n; a++)
	{
		if (n <= 0)
		{
			_putchar('_');
		}
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
