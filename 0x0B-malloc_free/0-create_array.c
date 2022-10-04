#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates ana array of chars,
 * and initializes it with a specific char
 *
 * @size: unsigned int parameter
 * @c: char parameter
 *
 * Return: pointer to the array or NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
