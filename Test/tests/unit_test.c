#include "main.h"

/**
 * main - Test the custom _printf function as it grows.
 *
 * Return: Always 0.
 *
 * Description - Used to test the custom _printf function
 * as we add more functionalities
 */
int main(void)
{
	_printf("Let's try to printf a Simple Sentence.\n");
	_printf("Let's try to printf a Character:[%c]\n", 'H');
	_printf("Let's try to printf a String[%s]\n", "ALX printf Team");
	_printf("Let's try to printf a Percentage Sign[%%].\n");

	return (0);
}
