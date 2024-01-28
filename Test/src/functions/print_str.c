#include "../main.h"

/**
 * print_str - Print a string.
 * @args: The va_list containing the string to be printed.
 *
 * Return: The number of characters printed for 's'.
 */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int charBytes = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		charBytes++;
	}

	return (charBytes);
}
