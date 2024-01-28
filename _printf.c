#include "main.h"

/**
 * _printf - Custom printf function.
 * @format: A format string specifying how the subsequent arguments are
 * formatted.
 * @...: Additional arguments to be formatted and printed.
 *
 * Return: The number of characters printed excluding the null byte.
 *
 * Description: This function mimics the behavior of the standard
 * printf function. It supports various format specifiers and allows
 * formatting and printing of output to the standard output.
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	unsigned int charBytes = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			charBytes++;
		}
		else
		{
			i++; /* Move to the character after '%' */
			switch (format[i])
			{
			case 'c':
				charBytes += print_char(args);
				break;
			case 's':
				charBytes += print_str(args);
				break;
			default:
				_putchar('%');
				_putchar(format[i]);
				charBytes += 2;
				break;
			}
		}
	}

	va_end(args);

	return (charBytes);
}
