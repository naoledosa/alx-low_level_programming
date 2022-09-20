#include "main.h"

/**
 * _strcpy - function that copies the string pointed
 * @dest: pointer to char
 * @src: pointer to char
 * Return: always 0.
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
	{
		*dest++ = *src++;
	}

	*temp++ = '\0';

	return (temp);
}

