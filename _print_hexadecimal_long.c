#include "main.h"
#include <stdio.h>

/**
 * _print_hexadecimal_long - Prints an unsigned long integer in hexadecimal
 * @n: The unsigned long integer to be printed
 * @format: The format specifier ('x' or 'X') for lowercase or uppercase hexa
 *
 * Return: The number of characters printed
 */
int _print_hexadecimal_long(unsigned long n, char format)
{
	char buffer[17];
	int count = 0;
	int remainder;
	int i = 0;

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}

	while (n != 0)
	{
		remainder = n % 16;
		if (remainder < 10)
			buffer[i] = remainder + '0';
		else if (format == 'x')
			buffer[i] = remainder - 10 + 'a';
		else if (format == 'X')
			buffer[i] = remainder - 10 + 'A';

		n /= 16;
		i++;
	}

	while (i > 0)
	{
		count += _putchar(buffer[i - 1]);
		i--;
	}

	return (count);
}
