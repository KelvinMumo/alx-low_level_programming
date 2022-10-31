#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * 
 * @n: A pointer to the bit
 * @index: index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, -1 if an error occured
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
