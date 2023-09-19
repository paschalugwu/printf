#include "main.h"
#include <string.h>

/**
 * _print_reversed_string - Prints the reversed string
 * @str: The string to be reversed and printed
 *
 * Return: The number of characters printed
 */
int _print_reversed_string(char *str)
{
	int len = strlen(str);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}

	return (len);
}
