#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: always 0.
 */

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		_putchar((number % 10) + '0');
	}
	_putchar('\n');
}
