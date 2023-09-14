#include "main.h"
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int sum = 0;
int num;
for (num = 0; num < 1024; num++)
{
if (num % 3 == 0 || num % 5 == 0)
{
sum += num;
}
}
_putchar((sum / 100000) + '0'); /* Print hundreds of thousands digit */
_putchar((sum / 10000) % 10 + '0'); /* Print ten-thousands digit */
_putchar((sum / 1000) % 10 + '0'); /* Print thousands digit */
_putchar((sum / 100) % 10 + '0'); /* Print hundreds digit */
_putchar((sum / 10) % 10 + '0'); /* Print tens digit */
_putchar((sum % 10) + '0'); /* Print ones digit */
_putchar('\n');
return (0);
}

