#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0
 *
 */
void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
