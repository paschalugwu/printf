#include "main.h"

/**
 * _print_unsigned_integer - Prints an unsigned integer
 * @n: The unsigned integer to print
 *
 * Return: The number of digits printed
 */
int _print_unsigned_integer(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += _print_unsigned_integer(n / 10);

	count += _putchar((n % 10) + '0');

	return (count);
}
