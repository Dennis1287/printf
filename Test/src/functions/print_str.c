#include "../main.h"

/**
 * print_str - Print a string.
 * @args: A va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	unsigned int i, charBytes = 0;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		charBytes++;
	}

	return (charBytes);
}
