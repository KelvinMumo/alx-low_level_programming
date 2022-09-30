#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0(Success) or 1(Error)
 *
 */
int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	res = a * b;

	printf("%d\n", res);
	return (0);
}
