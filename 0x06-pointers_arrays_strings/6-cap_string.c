#include "main.h"
/**
*cap_string - Capitalizes all words of a string.
*@str: The input string.
*
*Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
int i = 0;
while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
{
if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{')
{
str[i] -= 32; /* Convert to uppercase */
}
}
i++;
}
return str;
}

