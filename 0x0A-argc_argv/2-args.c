#include <stdio.h>

/**
 * main - Prints all arguments passed into the program
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
