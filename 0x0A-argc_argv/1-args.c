/*
*Description:
*This program calculates and prints the number of command-line arguments
*passed to it, excluding the program name itself. It uses the 'argc'
*variable to count the arguments and subtracts 1 to exclude the program name.
*The result is printed to the standard output followed by a newline.
*
*Usage: ./program_name [arg1] [arg2] ...
*/
#include <stdio.h>
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}

