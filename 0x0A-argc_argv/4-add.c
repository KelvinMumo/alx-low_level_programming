#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0(Success) or 1(Error)
 *
 */
int main(int argc, char *argv[])
{
	int i, j;

	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] <= 47 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
