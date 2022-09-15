#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of \ charcters to printed
 * Return: always 0.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (i == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
