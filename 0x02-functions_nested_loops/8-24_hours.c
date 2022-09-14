#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *              starting from 00:00 to 23:59
 * Return: always 0.
 */

void jack_bauer(void)
{
	int min;
	int day;

	for (day = 0; day <= 23; day++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((day / 10) + '0');
			_putchar((day % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
