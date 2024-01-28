#include "main.h"

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, returns the number of bytes written.
 * On error, returns -1.
 */
int _putchar(char c)
{
	int bytes;

	bytes = write(1, &c, 1);

	return (bytes);
}
