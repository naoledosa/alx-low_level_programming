/* headers - predifned libraries */
#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/*
 *	This program generates random number
 *
 *	and assigns the number to n
 *
 *	based on the value of n
 *
 *	decides whether it is positive, negative or zero
 *
 *	and prints message accordingly
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive ", n);
	}
	else if (n == 0)
	{
		printf("%d is zero ", n);
	}
	else 
	{
		printf("%d is negative ", n);
	}
	return (0);
}
