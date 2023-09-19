#include "main.h"

/**
 * _print_number - Prints a number
 * @n: The number to print
 *
 * Return: The number of digits printed
 */
int _print_number(int n)
{
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}

	if (n / 10)
		count += _print_number(n / 10);

	count += _putchar((n % 10) + '0');

	return (count);
}
