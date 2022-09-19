#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: String
 *
 * Return: void
 *
 */
void rev_string(char *s)
{
	int len, i, j;
	char v1, v2;

	len = 0;


	while (s[len] != '\0')
	{
		i++;
	}

	j = len - 1;
	i = 0;

	while (j > i)
	{
		v1 = s[i];
		v2 = s[j];
		s[i] = v2;
		s[j] = v1;
		j--;
		i++;
	}
}
