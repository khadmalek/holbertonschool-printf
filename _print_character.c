#include "main.h"
#include <stdarg.h>

/**
* print_char - Prints a single character to stdout.
* @arg: The argument list containing the character to be printed.
*
* Return: The number of characters printed (always 1).
*/
int print_char(va_list arg)
{
	char character = va_arg(arg, int);

	_putchar(character);

	return (1);
}
