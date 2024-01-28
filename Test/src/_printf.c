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
	int charBytes = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			charBytes++;
		}
		else
		{
			format++; /* Move to the character after '%' */
			switch (*format)
			{
			case 'c':
				charBytes += print_char(args);
				break;
			case 's':
				charBytes += print_str(args);
				break;
			case '%':
				charBytes += print_percent();
				break;
			default:
				write(1, "%", 1);
				write(1, format, 1);
				charBytes += 2;
				break;
			}
		}

		format++;
	}

	va_end(args);

	return (charBytes);
}
