#include <main.h>

/**
 * *_strcat - Appends the src string to the dest string
 *
 * @src: source
 * @dest: destination
 *
 * Return: Pointer to the resulting string dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	int j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
