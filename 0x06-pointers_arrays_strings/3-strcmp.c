#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: always 0.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		*s1++;
		*s2++;
	}

	return (*s1 - *s2);
}
