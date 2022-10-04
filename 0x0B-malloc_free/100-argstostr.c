#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 * Return: NULL or argument
 */

char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (b < ac)
	{
		while (av[b][c])
		{
			a++;
			c++;
		}

		c = 0;
		b++;
	}

	s = malloc((sizeof(char) * a) + ac + 1);

	b = 0;

	while (av[b])
	{
		while (av[b][c])
		{
			s[d] = av[b][c];
			d++;
			c++;
		}

		s[d] = '\n';

		c = 0;
		d++;
		b++;
	}

	d++;
	s[d] = '\0';
	return (s);
}

