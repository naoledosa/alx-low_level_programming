#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *function_name - main function
 *Description - The function generates random number
 *assigns its value to variable n, based on the value
 *of n, the function returns positive, negative or zero
 */
int main(void)
{
	int n;	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
