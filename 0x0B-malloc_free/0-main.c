#include <stdio.h>
#include <stdlib.h>
char *create_array(unsigned int size, char c);
/**
*main - check the code for ALX School students.
*
*Return: Always 0.
*/
int main(void)
{
unsigned int i;
char *str;
str = create_array(98, 'H');
if (str == NULL)
{
printf("failed to allocate memory\n");
return (1);
}
i = 0;
while (i < 98)
{
if (i % 10)
{
printf(" ");
}
if (!(i % 10) && i)
{
printf("\n");
}
printf("0x%02x", str[i]);
i++;
}
printf("\n");
free(str);
return (0);
}

