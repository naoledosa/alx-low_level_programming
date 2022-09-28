#include "main.h"


int length(char *s);
int check(char *s, int i, int j);
int is_palindrome(char *s);

/**
 * length - Returns the length of a string.
 * @s: string
 * Return: length
 */

int length(char *s)
{
	int i = 0;

	if (*(s + i))
	{
		i++;
		i += length(s + i);
	}
	return (i);
}

/**
 * check - Checks if a string is a palindrome.
 * @s: string
 * @i: lenght
 * @j: index
 * Return: 0 or 1.
 */


int check(char *s, int i, int j)
{
	if (s[j] == s[i / 2])
		return (1);

	if (s[j] == s[i - j - 1])
		return (check(s, i, j + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: string
 * Return: 0 or 1.
 */

int is_palindrome(char *s)
{
	int j = 0;
	int i = length(s);

	if (!(*s))
		return (1);

	return (check(s, i, j));
}
