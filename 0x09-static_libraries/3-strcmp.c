#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int c;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			c = s1[i] - s2[i];
			return (c);
		}
		i++;
	}

	return (0);
}
