#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: pointer to char.
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[j++])
		i++;

	for (j = i - 1; j >= i / 2; j--)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}

}

