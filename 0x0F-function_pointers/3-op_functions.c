#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two number
 * @a: first number
 * @b: second number
 * Return: number
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substructs two number
 * @a: first number
 * @b: second number
 * Return: number
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two number
 @a: first number
 @b: second number
 Return: number
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two number
 * @a: first number
 * @b: second number
 * Return: number
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - reminder of two number
 * @a: first number
 * @b: second number
 * Return: number
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
