# PRINTF


# Synopsis
>The printf function in the C programming language, prints output according to format. The print function is used to print the "character, string, integer, percent, and a decimal" onto the output screen.


# Description

> The printf function produces output according a format that follows conversion specifiers. A conversion specifier is a character that specifies the type of conversion to be used. It is used during input and output.

>It tells the compiler what type of data is in the varaible when printing using printf. They are listed below.

>Printf is a function that writes output to the stdout, which is the standard output stream. Also, the function writes the output according to the format string. This format string specifies how the following arguments are converted for output.


# Requirements

_Here we list the requirements for our `printf` implementation, including allowed editors, compilation instructions, coding style, and limitations._


- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS '
- All your files should end with a new line
- Code use the Betty style.
- Global variables are not allowed
- No more than 5 functions per file


## Prototype

int _printf(const char *format, ...);


## Format

_Here we present a table detailing various conversion specifiers used in the `printf` function and their corresponding output types._


| Type | Output
| -------- | -------- |
| %c    | print character    |
| %s   | print string   |
| %i    | print integer    |
| %d   | print decimal   |
| %%  | print %    |



# Files

_In this section, we describe the structure and the various files that we have used to create our printf function, to ensure that it is clear and organised:_

* _print_character.c
* _print_percentage.c
* _print_string.c
* _print_digit.c
* main.h
* get_functions.c


## Compilation

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c


# Diagramme

#  Man page 
  
Your description here
    
    

## Example
  
_Demonstration of how to use the `printf` function with various format specifiers, showcasing its versatility and utility._


```bash
#include <stdio.h>
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
```
Here is the output for the code above

```bash
H
H
Hello, world!
Hello, world!
%
%
42
42
-123
-123
```



# Resources

_Links to additional resources and references used in the development of our `printf` implementation._


[Link](https://lucid.app/lucidchart/89602a7b-d7f2-4df1-9103-d0a8e84405c6/edit?beaconFlowId=CC7C5B9253D62F02&invitationId=inv_c8d67e15-f958-4b55-a580-b1a3aed8193c&page=0_0#)


[Link](https://docs.github.com/fr/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)
        


## 🙇 Author
#### Mahoutin
- Github: mahoutin19
#### Khadija
- Github: khadmalek