#include "main"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string
 * Return: always 0.
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;

		if (str[index - 1] == ' ' || str[index - 1] == '\t' || str[index - 1] == '\n' || str[index - 1] == ',' || str[index - 1] == ';' || str[index - 1] == '.' || str[index - 1] == '!' || str[index - 1] == '?' || str[index - 1] == '"' || str[index - 1] == '(' || str[index - 1] == ')' || str[index - 1] == '{' || str[index - 1] == '}' || i == 0)
			s[i] -= 32;
		i++;
	}

	return (s);
}

