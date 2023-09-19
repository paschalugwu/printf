#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>

/**
 * _print_pointer - Prints a pointer address in hexadecimal format
 * @ptr: The pointer to print
 *
 * Return: The number of characters printed
 */
int _print_pointer(void *ptr)
{
	uintptr_t address = (uintptr_t)ptr;
	int count = 0;

	count += _putchar('0');
	count += _putchar('x');

	if (address == 0)
	{
		count += _putchar('0');
	}
	else
	{
		count += _print_hexadecimal(address, 'x');
	}

	return (count);
}
