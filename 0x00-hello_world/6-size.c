#include <stdio.h>

/**
 * main - returns the size of different data types
 *        based on the operating system
 *
 * Returns - always (0) -  Success
 */

int main(void)
{
	int intType;
	char charType;
	float floatType;
	double doubleType;

	printf("Size of a char: %zu byte(s)\n", charType);
	printf("Size of an int: %zu byte(s)\n", intType);
	printf("Size of a float: %zu byte(s)\n", floatType);
	printf("Size of a double: %zu byte(s)\n", doubleType);

	return (0);
}
