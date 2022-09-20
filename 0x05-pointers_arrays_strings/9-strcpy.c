#include "main.h"

/**
 * _strcpy - function that copies the string pointed
 * @dest: pointer to char
 * @src: pointer to char
 * Return: always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}

