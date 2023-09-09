#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: print and that piece of art is useful" - Dora Korpar, 2015-10-19
 *
 * Return: 1 upon successful execution
 */
int main(void)
{
char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, quote, 59);  /* Write the text to standard error (file descriptor 2) */
return (1);
}

