#include "main.h"
#include <stdarg.h> // Ajout de l'en-tête pour utiliser va_list, va_start, va_end

int _printf(const char *format, ...)
{
        int index_format = 0;
        int total_length = 0;
        va_list arguments;

        if (format == NULL || format[0] == '\0') // Inversion de la condition
                return (-1);

        va_start(arguments, format);

        while (format[index_format] != '\0')
        {
                if (format[index_format] == '%')
                {
                        total_length += get_function(format[index_format + 1], arguments); // Assure-toi que get_function peut utiliser va_list
                        index_format += 2;
                }
                else
                {
                        total_length += _putchar(format[index_format]);
                        index_format++;
                }
        }
        va_end(arguments);
        return (total_length);
}
