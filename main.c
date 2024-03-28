#include <stdio.h>
/**
*_printf: ..
*/

int _printf(const char *format, ...);

int main(void)
{
_printf("%c\n", 'H');
_printf("%s\n", "Hello, world!");
_printf("%%\n");
_printf("%d\n", 42);
_printf("%i\n", -123);
return (0);
}

