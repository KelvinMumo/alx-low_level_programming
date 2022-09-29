#include "main.h"

int square(int i, int res);
/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: number
 *
 * Return: 0(Success) or -1(no natural square root)
 *
 */
int _sqrt_recursion(int n)
{
	return (square(1, n));
}

/**
 * square- Checks for square of a number
 *
 * @i: natural number
 * @res: result of squaring the natural number
 *
 * Return: 0(Success)
 *
 */
int square(int i, int res)
{
	if (i * i == res)
	{
		return (i);
	}
	if (i * i > res)
	{
		return (-1);
	}
	return (square(i + 1, res));
}
