#include "main.h"
#include <stdio.h>
/**
*print_buffer - Prints a buffer in a specific format.
*@b: The buffer to print.
*@size: The number of bytes to print from the buffer.
*/
void print_buffer(char *b, int size)
{
int i, j;
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = 0; j < 10; j++)
{
if (i + j < size)
printf("%02x", b[i + j]);
else
printf("  ");
if (j % 2)
printf(" ");
}
for (j = 0; j < 10; j++)
{
if (i + j < size && b[i + j] >= 32 && b[i + j] <= 126)
printf("%c", b[i + j]);
else if (i + j < size)
printf(".");
else
break;
}
printf("\n");
}
if (size <= 0)
printf("\n");
}

