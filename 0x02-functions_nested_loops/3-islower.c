#include "main.h"

/**
 * _islower - checks for lowercase character 
 *
 * Return: always 0.
 */

int _islower(int c)
{

	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);

}
