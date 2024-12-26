ft_printf

ft_printf is a custom implementation of the printf function in C. This project is part of the curriculum at 42 Wolfsburg.
Description
This project involves recoding the printf() function from libc to create a library called libftprintf.a. The ft_printf function mimics the behavior of the original printf() but with a limited set of conversions and features.
Features
The ft_printf function supports the following conversions:

    %c: Prints a single character
    %s: Prints a string
    %p: Prints a void * pointer in hexadecimal format
    %d: Prints a decimal (base 10) number
    %i: Prints an integer in base 10
    %u: Prints an unsigned decimal (base 10) number
    %x: Prints a number in hexadecimal (base 16) lowercase format
    %X: Prints a number in hexadecimal (base 16) uppercase format
    %%: Prints a percent sign

Compilation
To compile the library, use the provided Makefile:

bash
make

This will create the libftprintf.a library file.
Usage
To use the ft_printf function in your project:

	Include the header file in your C code:
#include "ft_printf.h"

Compile your project with the libftprintf.a library:

gcc your_file.c -L. -lftprintf

Use ft_printf in your code just like you would use the standard printf:

    ft_printf("Hello, %s!\n", "world");
	
Author
Talha-Zübeyr Mutlu
