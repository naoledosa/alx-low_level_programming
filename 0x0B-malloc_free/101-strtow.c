#include "main.h"
#include <stdlib.h>

int length(char *str);
int counter(char *str);
char **strtow(char *str);

/**
 * length - return length of word
 * @str: string to be tested
 * Return: length
 */

int length(char *str)
{
	int i = 0, j = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		j++;
		i++;
	}

	return (j);
}

/**
 * counter - counts word
 * @str: string to be tested
 * Return: number of word
 */

int counter(char *str)
{
	int i = 0, j = 0, k = 0;

	for (i = 0; *(str + i); i++)
		j++;

	for (i = 0; i < j; i++)
	{
		if (*(str + i) != ' ')
		{
			k++;
			i += length(str + i);
		}
	}

	return (k);
}

/**
 * strtow -  splits a string into words.
 * @str: string
 * Return: NULL or word
 */

char **strtow(char *str)
{
	int i = 0, word, letter, j, k;
	char **s;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word = counter(str);
	if (word == 0)
		return (NULL);

	s = malloc((sizeof(char *) * (word + 1)));

	if (s == NULL)
		return (NULL);

	for (j = 0; j < word; j++)
	{
		while (str[i] == ' ')
			i++;

		letter = length(str + i);

		s[j] = malloc((sizeof(char) * (letter + 1)));

		if (s[j] == NULL)
		{
			for (; j >= 0; j--)
			{
				free(s[j]);
			}
			free(s);
			return (NULL);
		}

		for (k = 0; k < letter; k++)
			s[j][k]= str[i++];

		s[j][k] = '\0';
	}

	s[j] = NULL;

	return (s);
}
