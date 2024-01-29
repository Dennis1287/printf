#include "main.h"

/**
 * print_char - Print a character.
 * @args: The va_list containing the character to be printed.
 *
 * Return: Always 1 (number of characters printed for 'c').
 */
int print_char(va_list args)
{
	return _putchar(va_arg(args, int));

}
