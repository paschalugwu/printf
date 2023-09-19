#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _print_string(char *str);
int _print_number(int n);
int _print_long(long n);
int _print_short(short n);
int _print_unsigned_integer(unsigned int n);
int _print_unsigned_long(unsigned long n);
int _print_unsigned_short(unsigned short n);
int _print_octal(unsigned int n);
int _print_octal_long(unsigned long n);
int _print_octal_short(unsigned short n);
int _print_hexadecimal(unsigned int n, char format);
int _print_hexadecimal_long(unsigned long n, char format);
int _print_hexadecimal_short(unsigned short n, char format);
int _print_reversed_string(char *str);
int _print_rot13_string(char *str);
int _print_address(va_list args);
int _print_binary(unsigned int num);
char *_itoa(int num, char *str);
int _print_caps_hexadecimal(va_list args);
int _print_caps_hexadecimal_recursive(unsigned int num);
int _print_caps_hexadecimal_long(va_list args);
int _print_caps_hexadecimal_recursive_long(unsigned long num);
int _print_caps_hexadecimal_short(va_list args);
int _print_caps_hexadecimal_recursive_short(unsigned short num);
int _print_hexadecimal_recursive(unsigned long int num);
int _print_pointer(void *ptr);
int _print_width(const char *format, int *index, va_list args);
int _print_size(const char *format, int *index);
int _print_precision(const char *format, int *index, va_list args);
int _print_flags(const char *format, int *index);

#endif /* MAIN_H */
