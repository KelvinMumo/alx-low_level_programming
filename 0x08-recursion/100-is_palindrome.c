#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s1: string to check
 *
 * Return: length of string
 *
 */
int _strlen_recursion(char *s1)
{
	if (*s1 == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s1 + 1));
}

/**
 * check_palindr - checks if a string is a palindrome
 *
 * @l: left hand index
 * @r: right hand index
 * @str: possible palindrome
 *
 * Return: 1 if palindrome 0 if not
 *
 */
int check_palindr(int l, int r, char *str)
{
	if (l >= r)
	{
		return (1);
	}
	if (str[l] != str[r])
	{
		return (0);
	}
	return (check_palindr(l + 1, r - 1, str));
}

/**
 * is_palindrome - Checks whether a string is a palindrome
 *
 * @s: string
 *
 * Return: 1 if a string is a palindrome, 0 if not
 *
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s) - 1;
	return (check_palindr(0, i, s));
}
