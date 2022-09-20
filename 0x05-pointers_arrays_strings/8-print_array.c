#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to int.
 * @n: number of array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(*(a + i));
		if (i != n - 1)
			_putchar(', ');
	}

	_putchar('\n');
}
