#include <stdio.h>
#include "main.h"

/**
* print_digit - Prints a digit
* @args: A list of arguments containing the digit to print
* Return: The number of characters printed
*/
int print_digit(va_list args)
{
	int is_negative = 0;
	long int digit = va_arg(args, int);
	int count = 0;
	int digits[10]; /* Declaration of the array here */
	int index = 0;  /* Declaration of the 'index' variable here */
	int i;

	if (digit < 0)/* Check if the digit is negative */
	{
		is_negative = 1;
		digit = -digit;
	}
	if (digit == 0)/* Special case: if the digit is 0, print 0 and return */
		return (_putchar('0'));

	while (digit != 0)
	{
		int current_digit = digit % 10;

		digits[index++] = current_digit;
		digit /= 10;
	}
	if (is_negative)/* If the digit was negative, print '-' sign */
		count += _putchar('-');

	for (i = index - 1; i >= 0; i--) /* Print each digit in reverse order */
		count += _putchar(digits[i] + '0');

	return (count); /* Return the total count of characters printed */
}
