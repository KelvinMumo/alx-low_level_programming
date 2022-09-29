#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power y
 *
 * @x: integer to be raised to a given power
 * @y: power to which x is raised
 *
 * Return: 0(Success), -1(if y < 0)
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
