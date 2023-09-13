#include "main.h"
/**
*main - entry point
* 
*print_alphabet - Prints the alphabet in lowercase followed by a new line.
* 
*Return : 0 upon succesful execution 
*/
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}

