#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: the first pointer to int.
 * @b: the second pointer to int.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
