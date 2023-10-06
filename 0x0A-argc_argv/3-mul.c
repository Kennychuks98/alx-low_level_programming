#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int num1, num2, result;
/*Check if the program received exactly two arguments*/
if (argc != 3)
{
printf("Error\n");
return (1);
}
/*Parse and convert the input numbers to integers*/
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
/*Calculate the product*/
result = num1 * num2;
/*Print the result*/
printf("%d\n", result);
return (0);
}

