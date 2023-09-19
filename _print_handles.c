#include "main.h"
#include <ctype.h>

#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16
/**
 * _print_flags - Retrieves and calculates active flags for printing
 * @format: The format string
 * @index: The current index in the format string
 *
 * Return: The active flags
 */
int _print_flags(const char *format, int *index)
{
	int j, currIndex;
	int flags = 0;
	const char FLAG_CHARS[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAG_VALUES[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (currIndex = *index + 1; format[currIndex] != '\0'; currIndex++)
	{
		for (j = 0; FLAG_CHARS[j] != '\0'; j++)
		{
			if (format[currIndex] == FLAG_CHARS[j])
			{
				flags |= FLAG_VALUES[j];
				break;
			}
		}
		if (FLAG_CHARS[j] == 0)
			break;
	}
	*index = currIndex - 1;
	return (flags);
}

/**
 * _print_precision - Retrieves and calculates the precision for printing
 * @format: The format string
 * @index: The current index in the format string
 * @args: The list of arguments
 *
 * Return: The precision
 */
int _print_precision(const char *format, int *index, va_list args)
{
	int currIndex = *index + 1;
	int precision = -1;

	if (format[currIndex] != '.')
		return (precision);

	precision = 0;
	for (currIndex += 1; format[currIndex] != '\0'; currIndex++)
	{
		if (isdigit(format[currIndex]))
		{
			precision *= 10;
			precision += format[currIndex] - '0';
		}
		else if (format[currIndex] == '*')
		{
			currIndex++;
			precision = va_arg(args, int);
			break;
		}
		else
			break;
	}
	*index = currIndex - 1;
	return (precision);
}

/**
 * _print_size - Retrieves and calculates the size for printing
 * @format: The format string
 * @index: The current index in the format string
 *
 * Return: The size
 */
int _print_size(const char *format, int *index)
{
	int currIndex = *index + 1;
	int size = 0;

	if (format[currIndex] == 'l')
		size = sizeof(long);
	else if (format[currIndex] == 'h')
		size = sizeof(short);

	if (size == 0)
		*index = currIndex - 1;
	else
		*index = currIndex;

	return (size);
}

/**
 * _print_width - Retrieves and calculates the width for printing
 * @format: The format string
 * @index: The current index in the format string
 * @args: The list of arguments
 *
 * Return: The width
 */
int _print_width(const char *format, int *index, va_list args)
{
	int currIndex;
	int width = 0;

	for (currIndex = *index + 1; format[currIndex] != '\0'; currIndex++)
	{
		if (isdigit(format[currIndex]))
		{
			width *= 10;
			width += format[currIndex] - '0';
		}
		else if (format[currIndex] == '*')
		{
			currIndex++;
			width = va_arg(args, int);
			break;
		}
		else
			break;
	}
	*index = currIndex - 1;
	return (width);
}
