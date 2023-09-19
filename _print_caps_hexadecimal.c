#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _print_caps_hexadecimal - Prints a hexadecimal number in uppercase
 * @args: Arguments list containing the hexadecimal number to print
 *
 * Return: Number of characters printed
 */
int _print_caps_hexadecimal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		count += _print_caps_hexadecimal_recursive(num);
	}

	return (count);
}

/**
 * _print_caps_hexadecimal_recursive - Recursive function
 * @num: The number to print
 *
 * Return: Number of characters printed
 */
int _print_caps_hexadecimal_recursive(unsigned int num)
{
	int count = 0;
	int remainder;

	if (num == 0)
	{
		return (count);
	}

	count += _print_caps_hexadecimal_recursive(num / 16);

	remainder = num % 16;

	if (remainder < 10)
	{
		_putchar(remainder + '0');
	}
	else
	{
		_putchar(remainder - 10 + 'A');
	}

	count++;

	return (count);
}
