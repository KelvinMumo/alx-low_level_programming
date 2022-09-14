#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @i: integer
 *
 * Return: 0
 *
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	return (i);
}
