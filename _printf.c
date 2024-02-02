#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			/* Copy non-% characters to buffer */
			buffer[buff_ind++] = format[i];

			/* Check if buffer is full, and print if needed */
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);

			printed_chars++;
		}
		else
		{
			/* Print buffered characters before processing %*/
			print_buffer(buffer, &buff_ind);
			/* Extract format specifiers and arguments*/
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			/* Move past the % character in format*/
			++i;
			/* Handle the specific format and update printed_chars*/
			printed = handle_print(format, &i, list, buffer,
			 flags, width, precision, size);
			/* Check for error in handling*/
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}
	/* Print any remaining characters in the buffer*/
	print_buffer(buffer, &buff_ind);
	va_end(list);
	return (printed_chars);
}
