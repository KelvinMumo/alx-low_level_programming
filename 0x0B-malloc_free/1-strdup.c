#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: pointer to string parameter
 *
 * Return: NULL if str = NULL or if memory available was insufficient
 * Return a pointer to the new string,
 *
 */
char *_strdup(char *str)
{
	int len, i;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	a = malloc(len * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		a[j] = str[j];
	}

	return (a);
}
