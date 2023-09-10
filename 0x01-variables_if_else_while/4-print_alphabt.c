#include <stdio.h>
/**
* main - Entry point
*
* Description: alphabets in lowercase except q and e.
*
* Return: 0 upon successful execution
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}

