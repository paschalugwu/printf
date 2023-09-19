#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _print_caps_hexadecimal_long - Prints a long hexadecimal number in uppercase
 * @args: Arguments list containing the long hexadecimal number to print
 *
 * Return: Number of characters printed
 */
int _print_caps_hexadecimal_long(va_list args)
{
	unsigned long num = va_arg(args, unsigned long);
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		count += _print_caps_hexadecimal_recursive_long(num);
	}

	return (count);
}

/**
 * _print_caps_hexadecimal_recursive_long - Recursive function
 * @num: The number to print
 *
 * Return: Number of characters printed
 */
int _print_caps_hexadecimal_recursive_long(unsigned long num)
{
	int count = 0;
	int remainder;

	if (num == 0)
	{
		return (count);
	}

	count += _print_caps_hexadecimal_recursive_long(num / 16);

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

/**
 * _print_caps_hexadecimal_short - Prints a short hexadecimal number in upper
 * @args: Arguments list containing the short hexadecimal number to print
 *
 * Return: Number of characters printed
 */
int _print_caps_hexadecimal_short(va_list args)
{
	unsigned short num = (unsigned short)va_arg(args, unsigned int);
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		count += _print_caps_hexadecimal_recursive_short(num);
	}

	return (count);
}

/**
 * _print_caps_hexadecimal_recursive_short - Recursive function
 * @num: The number to print
 *
 * Return: Number of characters printed
 */
int _print_caps_hexadecimal_recursive_short(unsigned short num)
{
	int count = 0;
	int remainder;

	if (num == 0)
	{
		return (count);
	}

	count += _print_caps_hexadecimal_recursive_short(num / 16);

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
