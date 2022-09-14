#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: always 0.
 */

int main(void)
{
	int counter;
	unsigned long x = 0, y = 1, sum;
	unsigned long num_11, num_12, num_21, num_22;
	unsigned long num_1, num_2;

	for (counter = 0; counter < 92; counter++)
	{
		sum = x + y;
		printf("%lu", sum);

		x = y;
		y = sum;

	}

	num_11 = x / 10000000000;
	num_12 = y / 10000000000;
	num_21 = x % 10000000000;
	num_22 = y % 10000000000;

	for (counter = 93; counter < 99; counter++)
	{
		num_1 = num_11 + num_21;
		num_2 = num_12 + num_22;

		if (num_1 + num_2 > 9999999999)
		{
			num_1 += 1;
			num_2 %= 10000000000;
		}

		printf("%lu%lu", num_1, num_2);

		if (counter != 98)
			printf(", ");

		num_11 = num_21;
		num_12 = num_22;
		num_21 = num_1;
		num_22 = num_2;

	}
	printf("\n");
	return (0);

}

