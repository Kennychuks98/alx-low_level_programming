#include "main.h"
#include <stdio.h>
int main(void)
{
char s1[100];
char s2[] = "Hello, world!";
_strcpy(s1, s2);
printf("Copied string: %s\n", s1);
return (0);
}

