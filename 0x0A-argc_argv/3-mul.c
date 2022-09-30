#include <stdio.h>

/**
 * main - multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i, product;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			product *= argv[i];
		}

		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
