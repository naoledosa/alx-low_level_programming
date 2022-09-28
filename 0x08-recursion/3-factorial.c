#include "main.h"

/**
 * factorial - pirnts factorial of numbers
 * @n: number being tested
 * Return: factroial of number n
 */

int factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);

	else if (n == 1 || n == 0)
		return (1);

	fact *= factorial(n - 1);

	return (fact);
}
