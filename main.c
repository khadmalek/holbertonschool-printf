#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*_printf: ..
*/

int _printf(const char *format, ...);

int main(void)
{
_printf("%c\n", 'H');
printf("%c\n", 'H');
_printf("%s\n", "Hello, world!");
printf("%s\n", "Hello, world!");
_printf("%%\n");
printf("%%\n");
_printf("%d\n", 42);
printf("%d\n", 42);
_printf("%i\n", -123);
printf("%i\n", -123);
return (0);
}
