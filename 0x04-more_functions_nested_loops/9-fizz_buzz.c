#include "main.h"
#include <stdio.h> /* Include the standard I/O header */
/**
*fizz_buzz - Prints Fizz, Buzz, or FizzBuzz for multiples of 3, 5, or both.
*/
void fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
if (i % 3 == 0)
printf("Fizz");
if (i % 5 == 0)
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i < 100)
printf(" ");
}
printf("\n");
}

