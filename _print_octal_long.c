#include "main.h"
#include <stdio.h>

/**
 * _print_octal_long - Prints an unsigned long integer in octal format
 * @n: The unsigned long integer to be printed
 *
 * Return: The number of characters printed
 */
int _print_octal_long(unsigned long n)
{
	char buffer[22];
	int count = 0;
	int i = 0;

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}

	while (n != 0)
	{
		buffer[i] = (n % 8) + '0';
		n /= 8;
		i++;
	}

	while (i > 0)
	{
		count += _putchar(buffer[i - 1]);
		i--;
	}

	return (count);
}
