#include "main.h"

/**
 * _isupper - Checks for uppercase character
 *
 * @c: Parameter
 *
 * Return: 1 if c is uppercase, return 0 otherwise
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
