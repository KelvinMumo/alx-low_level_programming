#include "main.h"

/*
 * _strcmp - Compares two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; si[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}
