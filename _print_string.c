#include "main.h"
#include <unistd.h>

/**
 * _print_string - Prints a string
 * @str: The string to be printed
 *
 * Return: The number of characters printed
 */
int _print_string(char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}
