#include "main.h"

int square_root(int i, int j);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number being tested
 * Return: square of n
 */

int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}

/**
 * square_root - prints square root
 * @i: numbers
 * @j: numbers
 * Return: square root
 */

int square_root(int i, int j)
{
	int square = j * j;

	if (square > i)
		return (-1);

	if (square == i)
		return (j);

	return (square_root(i, j + 1));

}

