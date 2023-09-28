#include "main.h"
/**
*_putchar - Writes a character to the standard output
*@c: The character to write
*
*Return: On success 1. On error, -1 is returned.
*/
int _putchar(char c);
/**
*_print_rev_recursion - Prints a string in reverse.
*@s: The string to be printed.
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0') /* Base case: end of string reached */
return;
_print_rev_recursion(s + 1); /* Recur with the next character in the string */
_putchar(*s); /* Print the current character */
}

