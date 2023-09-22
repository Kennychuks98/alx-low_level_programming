#include "main.h"
#include <stdio.h>
int main(void)
{
int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
int n = sizeof(a) / sizeof(int);
int i; /* Declare the loop variable here */
printf("Original array:\n");
for (i = 0; i < n; i++) /* Use the declared variable in the for loop */
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
else
printf("\n");
}
reverse_array(a, n);
printf("Reversed array:\n");
for (i = 0; i < n; i++) /* Use the declared variable in the for loop */
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
else
printf("\n");
}
return (0);
}

