#include <stdio.h>
/**
*main - Entry point
*
*Description: size i\of various types on the computer.
*
*Return: 0 upon successful execution
*/
int main(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
{
putchar(digit + '0');
if (digit < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
