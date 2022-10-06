#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: size in bytes
 *
 * Return: pointer to allocated memory or terminate with status value 98
 *
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		return(98);
}
