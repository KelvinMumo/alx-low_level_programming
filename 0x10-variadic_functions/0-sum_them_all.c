#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all function parameters
 *
 * @n: number of parameters
 *
 * Return: 0 (Success)
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list li;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(li, int);
	}
	va_end(li);
	return (sum);
}
