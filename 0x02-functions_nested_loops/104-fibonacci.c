#include "main.h"
/**
*print_large_number - Print a large number using _putchar
*@num: The number to print
*
*Description: This function prints a large number using _putchar.
*It handles numbers up to 98 digits long.
*/
void print_large_number(char *num)
{
int i;
for (i = 0; num[i]; i++)
{
_putchar(num[i]);
}
}
/**
*main - Print the first 98 Fibonacci numbers
*
*Return: Always 0
*/
int main(void)
{
char a[100] = "1";
char b[100] = "2";
char result[100] = "";
int i;
print_large_number(a);
_putchar(','); _putchar(' ');
for (i = 1; i < 98; i++)
{
if (i != 1)
{
_putchar(','); _putchar(' ');
}
print_large_number(b);
strcpy(result, b);
strcpy(b, a);
memset(a, '0', sizeof(a));
add_strings(a, result);
}
_putchar('\n');
return (0);
}

