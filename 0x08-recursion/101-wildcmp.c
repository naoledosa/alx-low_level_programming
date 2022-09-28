#include "main.h"

int length(char *str);
void iterate_wild(char **wildstr);
char *match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);


/**
 * length - Returns the length of a string, ignores wild chars
 * @str: string to be tested
 * Return: length
 */

int length(char *str)
{
	int i = 0, j = 0;

	if (*(str + j))
	{
		if (*str != '*')
			i++;

		j++;
		i += length(str + j);
	}

	return (i);
}

/**
 * iterate_wild - Iterates through a string located at a wildcard
 * @wildstr: string to be iterated
 */

void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * match - Checks if a string str matches the postfix
 * @str: The string to be matched.
 * @k: The postfix.
 * Return: index
 */

char *match(char *str, char *postfix)
{
	int i = length(str) - 1;
	int j = length(k) - 1;

	if (*k == '*')
		iterate_wild(&k);

	if (*(str + i - j) == *k && *k != '\0')
	{
		k++;
		return (match(str, k));
	}
	return (k);
}

/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: the first string
 * @s2: the second string
 * Return: 0 or 1.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = match(s1, s2);
	}
	if (*s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
