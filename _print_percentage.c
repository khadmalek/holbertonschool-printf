#include <stdio.h>
#include "main.h"

/**
* print_perc - Prints the percentage symbol.
* @args: Not used in this function as it does not take any arguments.
*
* Return: The character '%'.
*/
int print_perc(va_list args)
{
	(void)args; /*To suppress the unused parameter warning*/

	_putchar('%'); /*Using the _putchar function to print '%'*/

	return (1); /*Indicating that 1 character ('%') has been printed*/
}
