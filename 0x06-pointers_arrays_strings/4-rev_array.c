#include "main.h"
#include <stdio.h>

/**
 * reverses the content of an array of integers
 * @a: array of intergers
 * @n: the number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int i = 0, j;

	while (i < n - 1)
	{
		j = a[i];
		a[i] = a[n - 1];
		a[n - 1] = j;
		n--;
		i++;
	}
}


