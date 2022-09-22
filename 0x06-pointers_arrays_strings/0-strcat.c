#include "main.h"

/**
 * _strcat - Appends the src string to the dest string
 *
 * @dest: destination
 * @src: source
 *
 * Return: Pointer to the resulting string dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i++])
	{
		j++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[j++] = src[i];
	}

	return (dest);
}
