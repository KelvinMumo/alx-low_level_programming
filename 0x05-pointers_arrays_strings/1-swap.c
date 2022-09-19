#include "main.h"

/**
 * swap_int - Sqqwaps the values of two integers
 *
 * @a: Integer parameter
 * @b: Integer parameter
 *
 * Return: void
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
