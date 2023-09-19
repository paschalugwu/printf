#include "main.h"

/**
 * _print_octal - Prints a number in octal format
 * @n: The number to print
 *
 * Return: The number of digits printed
 */
int _print_octal(unsigned int n)
{
	int count = 0;

	if (n / 8)
		count += _print_octal(n / 8);

	count += _putchar((n % 8) + '0');

	return (count);
}
