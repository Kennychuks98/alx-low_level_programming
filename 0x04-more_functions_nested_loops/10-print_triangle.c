#include "main.h"
/**
*print_triangle - prints a triangle
*@size: size of the triangle
*
*Description: If size is 0 or less, the function should print only a new line.
*Use the character # to print the triangle.
*/
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size - i - 1; j++)
{
_putchar(' ');
}
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}

