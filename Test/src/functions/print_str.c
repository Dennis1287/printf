#include "../main.h"

/**
 * print_str - Print a string.
 * @args: The va_list containing the string to be printed.
 *
 * Return: The number of characters printed for 's'
 * excluding new line character.
 */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);

	if (str != NULL)
	{
		return (write(1, str, strlen(str)));
	}
	return (0);
}
