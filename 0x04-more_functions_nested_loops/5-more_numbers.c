#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
 
void more_numbers(void)
{
	int number, i;

	for (i = 0; i <= 9; i++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
