#include "main.h"

/**
 * infinite_add -  a function that adds two numbers.
 * @n1: the first number
 * @n2: the second number
 * @r: store result
 * @size_r: the buffer size
 * Return: always 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	 int i, j = 0, k = 0;

	 for (i = 0; *(n1 + i); i++)
		 j++;

	 for (i = 0; *(n2 + i); i++)
		 k++;

	 if (size_r <= j + 1 || size_r <= k + 1)
		 return (0);

	 n1 += j - 1;

	 n2 += k - 1;

	 *(r + size_r) = '\0';

	 return (add_strings(n1, n2, r, --size_r));

}
