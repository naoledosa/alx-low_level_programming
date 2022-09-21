#include "main.h"

/**
 * leet. - encodes a string into 1337.
 * @s: string
 * Return: always 0.
 */

char *leet(char *s)
{
	int i, j;

	char u[] = {'A', 'E', 'O', 'T', 'L'};
	char l[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == u[j] || s[i] == l[j])
				s[i] = n[j];
		}
	}

	return (s);
}
