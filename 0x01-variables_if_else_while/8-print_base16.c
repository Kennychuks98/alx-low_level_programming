#include <stdio.h>
/**
*main - Entry point
*
*Description: size i\of various types on the computer.
*
*Return: 0 upon successful execution
*/
#include <stdio.h>
int main(void)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
putchar(digit);
for (digit = 'a'; digit <= 'f'; digit++)
putchar(digit);
putchar('\n');
return (0);
}
