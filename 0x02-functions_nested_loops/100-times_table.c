#include "main.h"
/**
*print_times_table - prints the n times table, starting with 0
*@n: The number of times tables to print (0 <= n <= 15)
*/
void print_times_table(int n)
{
int row, col, product;
if (n >= 0 && n <= 15)
{
for (row = 0; row <= n; row++)
{
for (col = 0; col <= n; col++)
{
product = row * col;
if (col == 0)
_putchar('0');
else
{
_putchar(' ');
if (product < 10)
_putchar(' ');
else
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
if (col < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
}

