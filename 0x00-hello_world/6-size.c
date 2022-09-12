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

	printf("Size of a char: %c byte(s)\n", charType);
	printf("Size of an int: %d byte(s)\n", intType);
	printf("Size of a float: %f byte(s)\n", floatType);
	printf("Size of a double: %lf byte(s)\n", doubleType);

	return (0);
}
