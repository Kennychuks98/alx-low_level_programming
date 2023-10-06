#include <stdio.h>
/*
*File: 0-whatsmyname.c
*Authored by: [Your Name]
*Date: [Date]
*
*Description:
*This program prints its standard output.
*It uses the 'argv' array it dynamic.
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

