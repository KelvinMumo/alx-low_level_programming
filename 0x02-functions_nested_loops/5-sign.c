#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n: Holds the value for the number to be checked
 *
 * Return: 0
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
