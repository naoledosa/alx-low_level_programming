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
			if (day < 10 && min < 10)
				printf("0%d:0%d", day, min);
			else if (day < 10 && min > 10)
				printf("0%d:%d", day, min);
			else if (day > 10 && min < 10)
				printf("%d:0%d", day, min);
			else
				printf("%d:%d", day, min);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
