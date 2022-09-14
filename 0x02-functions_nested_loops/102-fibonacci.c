#include <stdio.h>

/**
 * main - prints 50 fibonacci numbers
 *
 * Return: always 0.
 */

int main(void)
{
	int counter;
	unsigned long x, y, sum = 0;

	for (counter = 0; counter < 50; counter++)
	{
		sum = x + y;
		printf("%lu", sum);

		x = y;
		y = sum;

		if (counter == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
