#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc == 2)
	{
		cents = atoi(*(argv + 1));
		if (cents == 0)
			printf("0\n");
		else
		{
			while (cents > 0)
			{
				if (cents >= 25)
					cents -= 25;
				else if (cents >= 10)
					cents -= 10;
				else if (cents >= 5)
					cents -= 5;
				else if (cents >= 2)
					cents -= 2;
				else
					cents -= 1;
				coins++;
			}
			return (printf("%d\n", coins), 0);
		}
	}
	else
		return (printf("Error\n"), 1);
	
	return (0);
}
