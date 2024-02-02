#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);
	printed_chars = process_format(format, list, buffer);
	va_end(list);

	return (printed_chars);
}

/**
 * process_format - Process the format string and print characters
 * accordingly
 * @format: Format string
 * @list: Variable argument list
 * @buffer: Character buffer for printing
 * Return: Number of characters printed
 */
int process_format(const char *format, va_list list, char buffer[])
{
	int i, printed_chars = 0;
	int buff_ind = 0;

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				printed_chars += _print_buffer(buffer,
							       &buff_ind);
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			i++;
			printed_chars += handle_format(format, &i,
						       list, buffer);
		}
	}

	printed_chars += _print_buffer(buffer, &buff_ind);

	return (printed_chars);
}

/**
 * handle_format - Handle the specific format specifier and update buffer
 * @format: Format string
 * @index: Current index in the format string
 * @list: Variable argument list
 * @buffer: Character buffer for printing
 * Return: Number of characters printed
 */
int handle_format(const char *format, int *index, va_list list, char buffer[])
{
	int flags, width, precision, size;
	int printed = 0;

	flags = get_flags(format, index);
	width = get_width(format, index, list);
	precision = get_precision(format, index, list);
	size = get_size(format, index);

	printed = handle_print(format, index, list, buffer,
			       flags, width, precision, size);

	if (printed == -1)
		return (-1);

	return (printed);
}

/**
 * print_buffer - Print the characters in the buffer
 * @buffer: Character buffer
 * @buff_ind: Index tracking the position in the buffer
 * Return: Number of characters printed
 */
int _print_buffer(char buffer[], int *buff_ind)
{
	int chars_printed = 0;

	if (*buff_ind > 0)
	{
		chars_printed += write(1, buffer, *buff_ind);
		*buff_ind = 0;
	}

	return (chars_printed);
}
