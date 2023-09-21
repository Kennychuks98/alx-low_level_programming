#include "main.h"
/**
*rot13 - Encodes a string using rot13.
*@str: The input string.
*
*Return: A pointer to the encoded string.
*/
char *rot13(char *str)
{
int i, j;
char *letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; str[i]; i++)
{
for (j = 0; letters[j]; j++)
{
if (str[i] == letters[j])
{
str[i] = rot13[j];
break;
}
}
}
return (str);
}

