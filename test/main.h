#ifndef MAIN_H
#define MAIN_H

/*
 * main.h - Header file for the _printf function.
 */

/*
 * _printf - Custom printf function.
 *
 * This function mimics the behavior of the standard printf function.
 * It allows formatting and printing of output to the standard output.
 *
 * @format: A format string specifying how the subsequent arguments are
 * formatted.
 * @...: Additional arguments to be formatted and printed.
 *
 * Return: The number of characters printed (excluding the null byte
 * used to end the output to strings).
 */
int _printf(const char *format, ...);

#endif /* MAIN_H */
