#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 *
 * Return: always 0.
 */

int main(void)
{
	unsigned long x = 0, y = 1, sum;
	float total_sum;

	while (1)
	{
		sum = x + y;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		x = y;
		y = sum;

	}

	printf("%.0f\n", total_sum);

	return (0);
}



