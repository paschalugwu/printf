#include "main.h"
#include <stdio.h>

/**
 * _print_long - Prints a long integer
 * @n: The long integer to be printed
 *
 * Return: The number of characters printed
 */
int _print_long(long n)
{
	char buffer[20];
	int count = 0;
	int i = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}

	while (n != 0)
	{
		buffer[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}

	while (i > 0)
	{
		count += _putchar(buffer[i - 1]);
		i--;
	}

	return (count);
}
