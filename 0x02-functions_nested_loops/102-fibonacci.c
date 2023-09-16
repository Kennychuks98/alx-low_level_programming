#include <stdio.h>
int main(void)
{
long int first = 1, second = 2, next, i;
printf("%ld, %ld, ", first, second);
for (i = 3; i <= 50; ++i)
{
next = first + second;
printf("%ld", next);
if (i < 50)
printf(", ");
first = second;
second = next;
}
printf("\n");
return (0);
}

