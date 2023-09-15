#include "main.h"
/**
*main - entry point
*
*print_numbers - prints numbers from 0 to 9
*
*return: 0 upon successful execution
*/
void print_numbers(void)
{
char c = '0';
while (c <= '9')
{
_putchar(c);
c++;
}
_putchar('\n');
}

