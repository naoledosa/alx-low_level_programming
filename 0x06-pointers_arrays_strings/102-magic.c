#include <stdio.h>

/**
 * main - prints a[2] = 98
 * Return: always 0.
 */

int main(void)
{
	int *p;

	*(p + 2) = 98;

	printf("a[2] = %d\n", *(p + 2));

	return (0);
}
