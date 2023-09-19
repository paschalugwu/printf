#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _print_hexadecimal - Prints a number in hexadecimal format
 * @n: The number to print
 * @format: The format specifier ('x' or 'X')
 *
 * Return: The number of digits printed
 */
int _print_hexadecimal(unsigned int n, char format)
{
	int count = 0;
	char hex_digits[] = "0123456789abcdef";

	if (n / 16)
		count += _print_hexadecimal(n / 16, format);

	count += _putchar(hex_digits[n % 16]);

	return (count);
}
