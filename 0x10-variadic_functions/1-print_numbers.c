#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @seperator: string to seperate the numbers
 * @n: number of integer parameters
 *
 * Return: void
 *
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(li, int));

		if (i < n - 1 && seperator)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(li);
}
