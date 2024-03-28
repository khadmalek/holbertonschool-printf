#include <stdio.h>
#include <stdarg.h>
/**
 * print_string - affiche une chaîne de caractères
 * @valist: va_list contenant la chaîne de caractères à afficher
 * Return: nombre de caractères affichés
 */
int print_string(va_list valist)
{
int index = 0;
char *chaine = va_arg(valist, char*);

if (chaine == NULL)
{
chaine = "(null)";
}
while (chaine[index] != '\0')
{
putchar(chaine[index]);
index++;
}
return index;
}

