#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number
 *
 * Return: always 0.
 */

int main(void)
{
	long prime = 612852475143, number;

	while (number < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (number = 3; number < (prime / 2); number += 2)
		{
			if (prime % number == 0)
			{
				prime /= number;
			}
		}
	}

	printf("%ld\n", prime);

	return (0);
}
