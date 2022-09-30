#include "main.h"
#include <stdio.h>

/**
 * _abs -  computes the absolute value of an integer
 * @val: number being tested
 * Return: always 0.
 */

int _abs(int val)
{

	if (val > 0)
		return (val);
	else
		return (-val);

	return (0);
}

