#include <stdio.h>
/**
* main - Entry point
*
* Description: letters of the alphabet in upper and lowercase.
*
* Return: 0 upon successful execution
*/
int main(void)
{
char lower = 'a';
char upper = 'A';
while (lower <= 'z')
{
putchar(lower);
lower++;
}
while (upper <= 'Z')
{
putchar(upper);
upper++;
}
putchar('\n');
return (0);
}

