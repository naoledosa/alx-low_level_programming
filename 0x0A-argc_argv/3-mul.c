#include <stdio.h>

/**
 * main - multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i, int product = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			product *= argv[i];
		}

		printf("Product = %d\n", product);
	}

	return (0);
}
