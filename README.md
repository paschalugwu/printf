# Project Title: Printf
Project was done in team of 2 people (Paschal Ugwu and Amarachi Nnanta)

## Description

This project aims to implement a simplified version of the  `printf`  function in C. The  `_printf`  function will take a format string and optional arguments, and produce output according to the given format.

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with the options  `-Wall -Werror -Wextra -pedantic -std=gnu89` 
- All files should end with a new line
- A  `README.md`  file, at the root of the project folder, is mandatory
- The code should follow the Betty style, which will be checked using  `betty-style.pl`  and  `betty-doc.pl` 
- Global variables are not allowed
- Each file should contain no more than 5 functions
- The main.c files provided in the examples can be used for testing purposes, but they don't need to be pushed to the repository (they won't be taken into account during evaluation)
- The prototypes of all functions should be included in the header file  `main.h` 
- The header files should be include guarded
- The  `_putchar`  function will not be provided for this project

### GitHub

- There should be one project repository per group. Other members should not fork or clone the project to ensure only one team member has the repository in their GitHub account. Otherwise, the team risks scoring 0%.

### More Info

#### Authorized functions and macros

-  `write`  (man 2 write)
-  `malloc`  (man 3 malloc)
-  `free`  (man 3 free)
-  `va_start`  (man 3 va_start)
-  `va_end`  (man 3 va_end)
-  `va_copy`  (man 3 va_copy)
-  `va_arg`  (man 3 va_arg)

#### Compilation

The code will be compiled using the following command:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
Please note the following:

- Do not push any C file containing a  `main`  function in the root directory of your project. You can have a separate test folder for all your test files, including the files with  `main`  functions.
- The main files provided by us will include your main header file ( `main.h` ) using the following line:  `#include main.h` 
- When testing with your  `_printf`  and the standard  `printf` , you might want to look at the  `gcc`  flag  `-Wno-format` . An example of a test file that you could use is provided below:
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

    return (0);
}
To compile and run the test file:
$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
$ ./printf
We strongly encourage you to work together as a team to create a comprehensive set of tests. If the task does not specify what to do with an edge case, follow the behavior of the standard  `printf`  function.

## Tasks

### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

Write a function that produces output according to a format.

- Prototype:  `int _printf(const char *format, ...);` 
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- Writes output to  `stdout` , the standard output stream
- The format string is composed of zero or more directives. See  `man 3 printf`  for more details. You need to handle the following conversion specifiers:
    -  `c` 
    -  `s` 
    -  `%` 
- You don't have to reproduce the buffer handling of the C library  `printf`  function
- You don't have to handle the flag characters, field width, precision, or length modifiers

### 1. Education is when you read the fine print. Experience is what you get if you don't

Handle the following conversion specifiers:

-  `d` 
-  `i` 
- You don't have to handle the flag characters, field width, precision, or length modifiers

## Repository
- GitHub repository: [printf](https://github.com/paschalugwu/printf)
