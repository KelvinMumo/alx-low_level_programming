#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: 2D array
 * @size: size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, k;
	int l = 0;
	int r = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + i;
		l += *(a + k);
	}
	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - 1 - j);
		r += *(a + k);
	}
	printf("%i, %i\n", l, r);
}
