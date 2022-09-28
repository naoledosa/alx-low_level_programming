#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number being tested
 * Return: square of n
 */

int square_root(int i, j)
{
	int square = j * j;

	if (square > i)
		return (-1);

	if (square == i)
		return (j);

	return (square_root(i, j + 1));

}

int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}

