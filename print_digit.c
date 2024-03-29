#include <stdio.h>
#include "main.h"
/**
 * print_digit - Imprime les chiffres d'un entier.
 *
 * @args: Liste d'arguments contenant l'entier à imprimer.
 *
 * Return: Le nombre de caractères imprimés.
 */

int print_digit(va_list args)
{
int count = 0;
long int digit = va_arg(args, int);
int is_negative = 0;
if (digit < 0)
{
is_negative = 1;
digit = -digit;
}
if (digit == 0)
{
return (_putchar('0'));
}

while (digit != 0)
{
int current_digit = digit % 10;
count += _putchar(current_digit + '0');
digit /= 10;
}

if (is_negative)
{
count += _putchar('-');
}
return (count);
}

