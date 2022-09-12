#include <stdio.h>

/**
 * main - returns the size of different data types
 *        based on the operating system
 *
 * Return - always (0) -  Success
 */

int main(void)
{
	int intType;
	long int longIntType;
	long long int longLongIntType;
	char charType;
	float floatType;

	printf("Size of a char: %c byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %f byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %lf byte(s)\n",sizeof(longLongIntType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
