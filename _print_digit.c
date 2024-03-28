#include <stdio.h>
#include "main.h"

int print_digit(va_list args)
{
    int is_negative = 0;
    long int digit = va_arg(args, int);
    int count = 0;
    int digits[10]; // Déclaration du tableau ici
    int index = 0; // Déclaration de la variable 'index' ici
    int i;

    if (digit < 0)
    {
        is_negative = 1;
        digit = -digit;
    }

    if (digit == 0)
    {
        return _putchar('0');
    }

    while (digit != 0)
    {
        int current_digit = digit % 10;
        digits[index++] = current_digit;
        digit /= 10;
    }

    if (is_negative)
    {
        count += _putchar('-');
    }

    for (i = index - 1; i >= 0; i--)
    {
        count += _putchar(digits[i] + '0');
    }

    return count;
}



