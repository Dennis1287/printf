#include "../main.h"

/**
 * print_percent - Print the '%' character.
 *
 * Return: Always 1 (number of characters printed for '%').
 */
int print_percent(void)
{
	return (write(1, "%", 1));
}
