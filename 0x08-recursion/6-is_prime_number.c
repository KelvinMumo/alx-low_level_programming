#include "main.h"

/**
 * check_prime - Checks whether a number is prime or not
 *
 * @f: factor
 * @num: Number to be checked
 *
 * Return: 1 if prime, 0 if not
 *
 */
int check_prime(int f, int num)
{
	if (num < 2 || num % f == 0)
	{
		return (0);
	}
	if (f > num / 2)
	{
		return (1);
	}
	return (check_prime(f + 1, num));
}

/**
 * is_prime_number - Checks whether a number is prime or not
 *
 * @n: number to be checked
 *
 * Return: 1 if n is prime, otherwise return 0
 *
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (check_prime(2, n));
}
