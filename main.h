#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

int get_function(const char specifier, va_list arguments);
int _putchar(char c);
int print_char(va_list arguments);
int print_string(va_list arguments);
int print_perc(va_list arguments);
int print_digit(va_list arguments);

/**
 * struct format_handler_structure - structure to handle format specifiers
 * and corresponding functions
 * @specifier: the format specifier character
 * @function: a function pointer to the corresponding data processing function
 */
typedef struct format_handler_structure

{
        char specifier;
        int (*function)(va_list);
} format_handler;

#endif
