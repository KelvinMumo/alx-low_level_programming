#include <stdio.h>

/**
 * main - find sum of multiples of 3 and 5 less than 1024
 *
 *Return: 0
 */

int main(void)
{
	int i, sum;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
