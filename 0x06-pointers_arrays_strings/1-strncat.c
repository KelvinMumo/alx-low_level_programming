#include <main.h>

/**
 * _strncat - Concatenates two strings
 *
 * @dest: Pointer to the resulting string
 * @src: Source string
 * @n: The function will use at most n bytes from src
 *
 * Return: A pointer to the resulting string dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != 0)
	{
		a++;
	}

	j = 0;

	while (src[b] != 0 && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
