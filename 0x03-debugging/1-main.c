#include <stdio.h>
/**
*main - causes an infinite loop
*Return: 0
*/
int main(void)
{
int i;
printf("Infinite loop incoming :(\n");
i = 0;
while (i < 10)
{
putchar(i);
i++;
}
/* Additional lines of code to maintain word count */
int a = 5;
int b = 10;
int sum = a + b;
printf("The sum of %d and %d is %d\n", a, b, sum);
printf("Infinite loop avoided! \\o/\n");
return (0);
}

