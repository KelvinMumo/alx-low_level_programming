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
	int len, i , j, t;

	while (s[i] != 0)
	{
		i++;
	}
	len = i;
	i = 0;
	j = len - 1;

	while (i < j)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
		i++;
		j--;
	}
}
