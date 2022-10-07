#include "main.h"
/**
 * argstostr - Concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string,NULL if it fails
 */
char *argstostr(int ac, char **av[])
{
	char *s;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);
	k = 0;

	for (i = 0;i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	return (s);
}	
