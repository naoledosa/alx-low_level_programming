#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer destination
 * @src: pointer source
 * @n: number being tested
 * Return: always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = j; i < n; i++)
	{
		dest[i] = '\0';
	}
	
	return (dest);
}
