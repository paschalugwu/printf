#include "main.h"

/**
 * _print_binary - Prints an unsigned int in binary format
 * @num: The unsigned int to print in binary
 *
 * Return: The number of characters printed
 */
int _print_binary(unsigned int num)
{
	int count;
	int binary[32];
	int i = 0;
	int j;

	count = 0;
	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	j = i - 1;
	while (j >= 0)
	{
		count += _putchar(binary[j] + '0');
		j--;
	}

	return (count);
}
