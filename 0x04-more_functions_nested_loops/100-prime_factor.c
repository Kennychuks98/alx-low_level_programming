#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0
*/
int main(void)
{
long n = 612852475143;
long largest_prime = 2;
while (n != 1)
{
if (n % largest_prime == 0)
{
n = n / largest_prime;
}
else
{
largest_prime++;
}
}
printf("%ld\n", largest_prime);
return (0);
}

