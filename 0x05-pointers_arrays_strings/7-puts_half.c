#include "main.h"

/**
 * puts_half - Prints the last half of a string
 *
 * @str: String parameter
 *
 * Return: void
 *
 */
void puts_half(char *str)
{
	int length;

	length = _strlen(str);

	if (length % 2 == 0)
	{
		length = length / 2;
	}
	else
	{
		length = (length + 1) / 2;
	}

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}

/**
 * _strlen - Returns the length of a string
 *
 * @s: String
 *
 * Return: 0
 *
 */
int _strlen(char *s)
{
	int i, count;

	i = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		i++;
	}

	return (i);
}
