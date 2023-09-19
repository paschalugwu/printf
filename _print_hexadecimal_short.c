#include "main.h"
#include <stdio.h>

/**
 * _print_hexadecimal_short - Prints an unsigned short integer in hexa
 * @n: The unsigned short integer to be printed
 * @format: The format specifier ('x' or 'X') for lower or upper
 *
 * Return: The number of characters printed
 */
int _print_hexadecimal_short(unsigned short n, char format)
{
	char buffer[9];
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
