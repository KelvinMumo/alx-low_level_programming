#include "main.h"

/**
 * _strstr - finds first occurrence of substring needle in the string haystack
 * The terminating null bytes (\0) are not compared
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring, or NULL
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0';)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return ('\0');
}
