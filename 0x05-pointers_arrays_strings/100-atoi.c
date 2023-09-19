#include "main.h"
/**
*_atoi - convert a string to an integer
*@s: the string to convert
*
*Return: the integer value of the string
*/
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
int started = 0;
while (*s)
{
if (*s == '-')
sign *= -1;
if (*s >= '0' && *s <= '9')
{
num = (num * 10) + (*s - '0');
started = 1;
}
else if (started)
{
break;
}
s++;
}
return (num *sign);
}

