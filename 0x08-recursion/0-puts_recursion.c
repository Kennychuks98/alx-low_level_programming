#include "main.h"
/**
*_putchar - Writes a character to the standard output
*@c: The character to write
*
*Return: On success 1. On error, -1 is returned.
*/
int _putchar(char c);
/**
*_puts_recursion - Prints a string followed by a new line.
*@s: The string to be printed.
*/
void _puts_recursion(char *s)
{
if (*s == '\0') /* Base case: end of string reached */
{
_putchar('\n'); /* Print a new line */
return;
}
_putchar(*s); /* Print the current character */
_puts_recursion(s + 1); /* Recur with the next character in the string */
}

