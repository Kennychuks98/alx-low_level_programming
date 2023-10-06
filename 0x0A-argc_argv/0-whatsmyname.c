#include <stdio.h>
/*
*File: 0-whatsmyname.c
*Authored by: [Your Name]
*Date: [Date]
*
*Description:
*This program prints its own name (the name of the executable) to the standard output.
*It uses the 'argv' array to access the program name, making it dynamic even if the
*executable is renamed.
*
*Usage: ./program_name
*/
int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
return (0);
}
else
{
fprintf(stderr, "No program name available.\n");
return (1);
}
}

