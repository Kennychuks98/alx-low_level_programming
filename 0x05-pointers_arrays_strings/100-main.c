#include <stdio.h>
#include "main.h"
int _atoi(char *);
/**
*main - check the code for Holberton School students.
*
*Return: Always 0.
*/
int main(void)
{
int n;
n = _atoi("-2147483648");
printf("%d\n", n);
return (0);
}

