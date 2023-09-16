#include <stdio.h>
/**
*main - Entry point
*
*This function prints the first 50 Fibonacci numbers separated by commas.
*
*Return: Always 0 (Success)
*/
int main(void)
{
long int first = 1, second = 2, next, i;
printf("%ld, %ld, ", first, second);
for (i = 3; i <= 50; ++i)
{
next = first + second;
printf("%ld", next);
if (i < 50)
printf(", ");
first = second;
second = next;
}
printf("\n");
return (0);
}

