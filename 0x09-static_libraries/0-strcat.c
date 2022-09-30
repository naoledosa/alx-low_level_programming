#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: destination.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j++] = src[i];
	}

	return (dest);
}
