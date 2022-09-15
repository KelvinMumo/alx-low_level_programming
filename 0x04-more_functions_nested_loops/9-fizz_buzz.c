#include <stdio.h>

/**
 *  main - Fizz Buzz
 *
 *  Return: 0
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) != 0))
		{
			printf("Fizz");
			putchar(' ');
		}

		if (((i % 3) != 0) && ((i % 5) == 0))
		{
			printf("Buzz");
			putchar(' ');
		}

		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz");
			putchar(' ');
		}
	        if (((i % 3) != 0) && ((i % 5) != 0))
		{
			printf("%i", i);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
