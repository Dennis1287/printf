#include "main.h"

/**
 * _putchar - Write a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, return the number of bytes written, otherwise -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
