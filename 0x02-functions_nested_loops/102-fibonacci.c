#include "main.h"
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int i;
long int a = 1, b = 2, next;
for (i = 0; i < 50; i++)
{
if (i == 49) /* Last number, no comma and space */
printf("%ld\n", a);
else
printf("%ld, ", a);
next = a + b;
a = b;
b = next;
}
return (0);
}

