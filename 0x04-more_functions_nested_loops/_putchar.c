/* _putchar.c */
#include <unistd.h>
/* Definition of _putchar function */
int _putchar(char c)
{
return write(1, &c, 1);
}

