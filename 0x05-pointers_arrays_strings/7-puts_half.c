#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer to char.
 */

void puts_half(char *str)
{
	int i = 0, j = 0;

	while (*(str + i) != 0)
	{
		i++;
	}

	if (i % 2 == 0)
		i /= 2;

	else
	{
		j = (i - 1) / 2;
		i -= j;
	}

	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}

	_putchar('\n');
}
