#include "main.h"
/**
*main - Entry point
*
*Return: Always 0
*/
int main(void)
{
int i;
unsigned long prev1 = 1, prev2 = 2, current;
_putchar('1');
_putchar(',');
_putchar(' ');
_putchar('2');
for (i = 2; i < 98; i++)
{
current = prev1 + prev2;
prev1 = prev2;
prev2 = current;
_putchar(',');
_putchar(' ');
print_large_number(current);
}
_putchar('\n');
return (0);
}
/**
*print_large_number - Prints a large number using multiple _putchar calls
*@n: The number to print
*/
void print_large_number(unsigned long n)
{
if (n >= 10)
print_large_number(n / 10);
_putchar((n % 10) + '0');
}

