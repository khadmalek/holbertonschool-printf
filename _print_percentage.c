#include <stdio.h>
#include "main.h"

/**
 * print_perc - Affiche le pourcentage.
 * @args: Non utilisé dans cette fonction, car elle ne prend pas d'arguments.
 * 
 * Return: Le caractère '%'.
 */
int print_perc(va_list args)
{
    (void)args; // Pour supprimer l'avertissement de paramètre non utilisé
    
    _putchar('%'); // Utilisation de la fonction _putchar pour afficher '%'
    
    return (1); // Indiquer que 1 caractère ('%') a été imprimé
}

