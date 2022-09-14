#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 *
 * @c - Holds value for character to be checked
 *
 * Return: 1 if c is a letter, Return 0 otherwise
 *
 */
int _isalpha(int c)
{
	if (c >= 'a' || c >= 'A' || c <= 'z' || c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
