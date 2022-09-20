#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to char
 */

void print_rev(char *s)
{
	int length = 0, i;

	while (*(s + 1))
		length++;

	if (length != 0)
	{
		for (i = length - 1; i >= 0; i--)
			_putchar(*(s + 1));
		_putchar('\n');
	}
}
