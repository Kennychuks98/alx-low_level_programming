#include "main.h"
/**
*infinite_add - Adds two numbers stored as strings
*@n1: The first number as a string
*@n2: The second number as a string
*@r: The buffer to store the result
*@size_r: The size of the buffer
*
*Return: A pointer to the result, or 0 if result cannot be stored in r
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, carry = 0;
for (i = 0; *n1 || *n2 || carry; ++i)
{
int sum = carry;
if (*n1)
sum += *n1++ - '0';
if (*n2)
sum += *n2++ - '0';
carry = sum / 10;
r[i] = sum % 10 + '0';
}
if (i >= size_r || (i == size_r - 1 && carry))
return (0);
r[i] = '\0';
for (i = 0; r[i]; ++i)
;
for (--i; i >= 0; --i, ++r)
r[i] = r[i];
return (r);
}

