#include <main.h>

/**
 * _strcat - Appends the src string to the dest string
 *
 * @src: source
 * @dest: destination
 *
 * Return: Pointer to the resulting string dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	while (*(dest + i))
	{
		i++;
	}

	j = 0;

	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
