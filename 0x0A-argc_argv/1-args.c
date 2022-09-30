#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 *
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
