#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: pointer to the newly allocated space in memory
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j,len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	a = malloc(sizeof(char) * (len1 + len2 + 1));

	if (a == NULL)
		return (NULL);
	i = 0;

	while (i < len1)
		a[i] = s1[i];
		i++;
	j = 0;
	while (j <= len2)
		a[i] = s2[j];
		i++;
		j++;
	return (a);
}
