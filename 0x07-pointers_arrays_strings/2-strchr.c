#include "main.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s: String
 * @c: Character to be located
 *
 * Return: pointer to first occurence of c in s or NULL if char not found
 *
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
