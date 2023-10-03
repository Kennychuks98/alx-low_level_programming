/**
*create_array - Creates an array of characters and initializes specific character.
*@size: The size of the array to create.
*@c: The character to initialize the array with.
*
*Return: A pointer to the allocated array, or NULL if it fails.
*/
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
if (size == 0)
return (NULL);
arr = malloc(size * sizeof(char));
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}

