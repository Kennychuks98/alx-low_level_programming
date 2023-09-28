#include "main.h"
/**
*_putchar - Writes a character to the standard output
*@c: The character to write
*
*Return: On success 1. On error, -1 is returned.
*/
int _putchar(char c);
/**
*_strlen_recursion - Returns the length of a string.
*@s: The string to be measured.
*
*Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0') /* Base case: end of string reached */
return 0;
return (1 + _strlen_recursion(s + 1)); /* Recur with the next character in the string */
}

