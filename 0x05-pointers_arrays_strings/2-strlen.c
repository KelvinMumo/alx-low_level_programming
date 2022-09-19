#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: String
 *
 * Return: 0
 *
 */
int _strlen(char *s)
{
	int i, count;

	i = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		i++;
	}

	return (i);
}
