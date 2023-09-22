/**
*leet - Encodes a string into 1337.
*@str: The input string to encode.
*
*Return: A pointer to the encoded string.
*/
char *leet(char *str)
{
char *s = str;
char leet[] = "aAeEoOtTlL";
char replace[] = "4433007711";
while (*s)
{
int i = 0;
while (leet[i])
{
if (*s == leet[i])
{
*s = replace[i];
break;
}
i++;
}
s++;
}
return (str);
}

