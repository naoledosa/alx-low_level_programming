#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords
 * Return: always 0.
 */

int main(void)
{
	char passwd[84];
	int i = 0, sum = 0, j, k;

	srand(time(0));

	while (sum < 2772)
	{
		passwd[i] = 33 + rand() % 94;
		sum += passwd[i++];
	}

	passwd[i] = '\0';

	if (sum != 2772)
	{
		j = (sum - 2772) / 2;
		k = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			j++;

		for (i = 0; passwd[i]; i++)
		{
			if (passwd[i] >= (33 + j))
			{
				passwd[i] -= j;
				break;
			}
		}

		for (i = 0; passwd[i]; i++)
		{
			if (passwd[i] >= (33 + k))
			{
				passwd[i] -= k;
				break;
			}
		}
	}

	printf("%s", passwd);

	return (0);

}
