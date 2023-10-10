#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
*_strdup - Returns a pointer to a newly allocated space in memory,
*which contains a copy of the string given as a parameter.
*@str: The string to copy.
*
*Return: If str == NULL, insufficient memory, or if memory allocation
*fails, return NULL; otherwise, return a pointer to the duplicated string.
*/
char *_strdup(char *str)
{
char *dup;
int len, i;
if (str == NULL)
return (NULL);
len = 0;
while (str[len])
len++;
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);
for (i = 0; i <= len; i++)
dup[i] = str[i];
return (dup);
}
/**
*new_dog - Creates a new dog structure.
*@name: The name of the dog.
*@age: The age of the dog.
*@owner: The owner of the dog.
*
*Return: If the function fails - NULL.
*Otherwise - a pointer to the newly created dog_t struct.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *dup_name, *dup_owner;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
dup_name = _strdup(name);
if (dup_name == NULL)
{
free(new_dog);
return (NULL);
}
dup_owner = _strdup(owner);
if (dup_owner == NULL)
{
free(dup_name);
free(new_dog);
return (NULL);
}
new_dog->name = dup_name;
new_dog->age = age;
new_dog->owner = dup_owner;
return (new_dog);
}

