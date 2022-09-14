#include "main.h"
#include <stdio.h>

/**
 * _abs -  computes the absolute value of an integer
 * 
 * Return: always 0.
 */

int _abs(int)
{
	int val;

	if (val >= 0)
		printf("%d", val);
	else
		printf("%d", -(val));

	return (0);
}

