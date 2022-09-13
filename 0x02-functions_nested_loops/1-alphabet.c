#include "main.h"

/**
 * main - Prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char alphabet;
	alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
	return (0);
}
