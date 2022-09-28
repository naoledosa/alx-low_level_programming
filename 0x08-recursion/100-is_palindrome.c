#include "main.h"

int check(char *s);

/**
 * length - returns length of string
 * @s: string to be tested
 * Return: length
 */

int length(char *s)
{
	if (*s == '0')
		return (0);

	s++;
	return (length(s) + 1);
}

/**
 * check - checks if string is palindrome
 * @s: string to be tested
 * Return: 0 or 1.
 */

int check(char *s)
{
	int i = length(s) - 1;

	if (*s == s[i])
	{
		s++;
		i--;
	}
	else
		return (0);

	return (1);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string to be tested
 * Return: 1 0r 0.
 */

int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check(s));
}

