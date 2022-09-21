#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @ch: character
 * Return: always 0.
 */

char *rot13(char *ch)
{
	int i = 0;

	while (ch[i])
	{
		while ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z'))
		{
			if ((ch[i] > 'm' && ch[i] <= 'z') || (ch[i] > 'M' && ch[i] <= 'Z'))
			{
				ch[i] -= 13;
				break;
			}

			ch[i] += 13;
			break;
		}

		i++;
	}

	return (ch);
}

