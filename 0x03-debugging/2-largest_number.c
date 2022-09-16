#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int max;

	if (a >= b && a >= c)
	{
		max = a;
	}
	else if (b >= a && b >= c)
	{
		max = b;
	}
	else
	{
		max = c;
	}

	return (max);
}
