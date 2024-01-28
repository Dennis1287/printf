#include "../main.h"

/**
 * print_char - Print a character.
 * @args: A va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
}
