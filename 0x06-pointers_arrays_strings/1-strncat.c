#include "main.h"
/**
*_strncat - Concatenates two strings up to n bytes from src
*@dest: The destination string
*@src: The source string
*@n: The maximum number of bytes to concatenate from src
*
*Return: A pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i;
while (dest[dest_len])
dest_len++;
for (i = 0; i < n && src[i]; i++)
dest[dest_len++] = src[i];
dest[dest_len] = '\0';
return (dest);
}

