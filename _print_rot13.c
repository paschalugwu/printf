#include "main.h"

/**
 * print_rot13 - Prints a string using the ROT13 cipher to the standard output
 * @str: The string to be printed using ROT13 cipher
 *
 * Return: Number of characters printed
 */
int _print_rot13_string(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			count += _putchar(str[i] + 13);
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') ||
			(str[i] >= 'N' && str[i] <= 'Z'))
		{
			count += _putchar(str[i] - 13);
		}
		else
		{
			count += _putchar(str[i]);
		}
		i++;
	}

	return (count);
}
