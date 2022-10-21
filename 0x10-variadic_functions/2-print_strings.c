#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 *
 * @seperator: string to be printed between the strings
 * @n: number of strings passed into the function
 *
 * Return: void
 *
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list li;

	va_start(li, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(li, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (i < n - 1 && seperator)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(li);
}
