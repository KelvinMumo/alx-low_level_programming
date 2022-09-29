#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 *
 * @n: number
 *
 * Return: 0 (Success)
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
