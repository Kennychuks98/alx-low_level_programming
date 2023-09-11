#include <stdio.h>
/**
*main - Entry point
*
*Description: a program that prints alphabets.
*
*Return: 0 upon successful execution
*/
int main(void)
{
char letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
