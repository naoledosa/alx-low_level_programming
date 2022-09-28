#include "main.h"

int is_prime_number(int n);

/**
 * is_prime_number - identifies prime number
 * @n: number being tested
 * Return: 1 or 0 depending on n
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	if (n == 2 || n == 3)
		return (1);

	return (check(n, i));
}

/**
 * check - checks if the number is divisible
 * @i: the number to be checked
 * @j: the divisor
 * Return: 0 or 1.
 */

int check(int i, int j)
{
	if (i % j == 0)
		return (0);

	if (j == i / 2)
		return (1);

	return (check(i, j + 1));
}
