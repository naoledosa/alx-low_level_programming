#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line
 *
 * Return: always 0.
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
