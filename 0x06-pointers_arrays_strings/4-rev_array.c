#include "main.h"
#include <stdio.h>

/**
 * reverses the content of an array of integers
 * @a: array of intergers
 * @n: the number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
}


