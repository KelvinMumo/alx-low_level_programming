#include "main.h"

/**
 * str_concat - Concatenates two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: pointer to the newly allocated space in memory
 * or NULL on failure
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;
	int size = strlen(s1) + strlen(s2) + 1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < strlen(s1))
	{
		s[i] = s2[i];
		i++;
	}
	j = 0;
	while (j < strlen(s2))
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	return (s);
}

