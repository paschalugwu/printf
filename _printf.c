#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
int _printf(const char *format, ...);
/**
 * _printf - Produces output according to a format
 * @format: The format string
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int flag_plus = 0;
	int flag_space = 0;
	int flag_hash = 0;
	int flag_zero = 0;
	int flag_long = 0;
	int flag_short = 0;
	int field_width = 0;
	int precision = -1;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			/* Check for flag characters */
			if (*format == '+')
			{
				flag_plus = 1;
				format++;
			}
			else if (*format == ' ')
			{
				flag_space = 1;
				format++;
			}
			else if (*format == '#')
			{
				flag_hash = 1;
				format++;
			}
			else if (*format == '0')
			{
				flag_zero = 1;
				format++;
			}
			else if (*format == '-')
			{
				format++;
				field_width = 0;
				while (*format >= '0' && *format <= '9')
				{
					field_width = (field_width * 10) + (*format - '0');
					format++;
				}
				field_width = -field_width;
			}

			/* Check for length modifiers */
			if (*format == 'l')
			{
				flag_long = 1;
				format++;
			}
			else if (*format == 'h')
			{
				flag_short = 1;
				format++;
			}

			/* Check for precision */
			if (*format == '.')
			{
				format++;
				if (*format >= '0' && *format <= '9')
				{
					precision = 0;
					while (*format >= '0' && *format <= '9')
					{
						precision = (precision * 10) + (*format - '0');
						format++;
					}
				}
			}

			switch (*format)
			{
				case 'c':
					count += _putchar(va_arg(args, int));
					break;
				case 's':
					count += _print_string(va_arg(args, char *));
					break;
				case '%':
					count += _putchar('%');
					break;
				case 'S':
				{
					char *str = va_arg(args, char *);
					int i;

					if (str != NULL)
					{
					for (i = 0; str[i] != '\0'; i++)
					{
					if (str[i] < 32 || str[i] >= 127)
					{
						count += _putchar('\\');
						count += _putchar('x');
						count += _putchar((str[i] / 16) < 10 ? (str[i] / 16) + '0' :
							(str[i] / 16) - 10 + 'A');
						count += _putchar((str[i] % 16) < 10 ? (str[i] % 16) + '0' :
							(str[i] % 16) - 10 + 'A');
					}
					else
					{
						count += _putchar(str[i]);
					}
					}
					}
					break;
				}
				case 'd':
				case 'i':
					if (flag_plus)
						count += _putchar('+');
					else if (flag_space)
						count += _putchar(' ');
					if (flag_zero && precision < 0)
					{
						int num = va_arg(args, int);
						char buffer[12];
						size_t len = strlen(_itoa(num, buffer));

					if (field_width > 0)
					{
						int diff = field_width - len;

					while (diff > 0)
					{
						count += _putchar('0');
						diff--;
					}
					}

						count += _print_string(buffer);
					}
					else if (flag_long)
						count += _print_long(va_arg(args, long));
					else if (flag_short)
						count += _print_short(va_arg(args, int));
					else
					{
						int num = va_arg(args, int);
						char buffer[12];
						size_t len = strlen(_itoa(num, buffer));

					if (precision >= 0 && precision > (int)len)
					{
						int diff = precision - len;

					while (diff > 0)
					{
						count += _putchar('0');
						diff--;
					}
					}

					if (field_width > 0)
					{
						int diff = field_width - len;

					while (diff > 0)
					{
						count += _putchar(' ');
						diff--;
					}
					}

						count += _print_string(buffer);
					}
					break;
				case 'u':
					if (flag_long)
						count += _print_unsigned_long(va_arg(args, unsigned long));
					else if (flag_short)
						count += _print_unsigned_short(va_arg(args, unsigned int));
					else
						count += _print_unsigned_integer(va_arg(args, unsigned int));
					break;
				case 'o':
					if (flag_long)
						count += _print_octal_long(va_arg(args, unsigned long));
					else if (flag_short)
						count += _print_octal_short(va_arg(args, unsigned int));
					else
						count += _print_octal(va_arg(args, unsigned int));
					break;
				case 'x':
					if (flag_long)
						count += _print_hexadecimal_long(va_arg(args, unsigned long), 'x');
					else if (flag_short)
						count += _print_hexadecimal_short(va_arg(args, unsigned int), 'x');
					else
						count += _print_hexadecimal(va_arg(args, unsigned int), 'x');
					break;
				case 'X':
					if (flag_long)
						count += _print_hexadecimal_long(va_arg(args, unsigned long), 'X');
					else if (flag_short)
						count += _print_hexadecimal_short(va_arg(args, unsigned int), 'X');
					else
						count += _print_hexadecimal(va_arg(args, unsigned int), 'X');
					break;
				case 'r':
					count += _print_reversed_string(va_arg(args, char *));
					break;
				case 'b':
				{
					unsigned int num = va_arg(args, unsigned int);

					count += _print_binary(num);
					break;
				}
				case 'p':
					count += _print_pointer(va_arg(args, void *));
					break;
				case 'R':
					count += _print_rot13_string(va_arg(args, char *));
					break;
				default:
					count += _putchar('%');
					if (flag_plus)
						count += _putchar('+');
					else if (flag_space)
						count += _putchar(' ');
					if (flag_hash)
						count += _putchar('#');
					if (flag_zero)
						count += _putchar('0');
					if (flag_long)
						count += _putchar('l');
					else if (flag_short)
						count += _putchar('h');
					if (field_width != 0)
					{
					while (field_width > 0)
					{
						count += _putchar(' ');
						field_width--;
					}
					while (field_width < 0)
					{
						count += _putchar(' ');
						field_width++;
					}
					}
					if (precision >= 0)
					{
					while (precision > 0)
					{
						count += _putchar('0');
						precision--;
					}
					}
					count += _putchar(*format);
					break;
			}

			flag_plus = 0;
			flag_space = 0;
			flag_hash = 0;
			flag_zero = 0;
			flag_long = 0;
			flag_short = 0;
			field_width = 0;
			precision = -1;
		}
		else
		{
			count += _putchar(*format);
		}

		format++;
	}

	va_end(args);

	return (count);
}

/**
 * _itoa - Converts an integer to a string
 * @num: The integer to convert
 * @str: The buffer to store the resulting string
 *
 * Return: The converted string
 */
char *_itoa(int num, char *str)
{
	int i = 0;
	int isNegative = 0;
	int start = 0;
	int end;

	/* Handle 0 explicitly */
	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}

	/* Handle negative numbers */
	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}

	/* Process individual digits in reverse order */
	while (num != 0)
	{
		int rem = num % 10;

		str[i++] = rem + '0';
		num = num / 10;
	}

	/* If number is negative, append '-' */
	if (isNegative)
		str[i++] = '-';

	/* Append string terminator */
	str[i] = '\0';

	/* Reverse the string */
	end = i - 1;

	while (start < end)
	{
		char temp = str[start];

		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}

	return (str);
}
