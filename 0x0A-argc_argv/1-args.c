#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of argument
 * @argv: array of arguments
 * Return: always 0.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
