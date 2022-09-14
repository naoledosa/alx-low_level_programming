#include <unistd.h>

/**
 * main - _putchar writes a character to stdout
 *
 * Return: 0 success
 *         1 error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
