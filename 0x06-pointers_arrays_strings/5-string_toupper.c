#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string
 * Return: always 0.
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}

		i++;
	}

	return (s);
}

