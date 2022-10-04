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
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 ='\0';
	}
	
	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	
	i = strlen(s1);
	j = 0;
	while (s2[j])
	{
		s1[i++] = s2[j];
		j++;
	}
	for (i = 0; i < size; i++)
	{
		s[i] = s1[i];
	}
	s[i] = '\0';

	return (s);
}

