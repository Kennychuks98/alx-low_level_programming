#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*new_dog - Creates a new dog.
*@name: The name of the dog.
*@age: The age of the dog.
*@owner: The owner of the dog.
*
*Return: A pointer to the new dog, or NULL if it fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog_ptr;
char *new_name, *new_owner;
int name_len = 0, owner_len = 0;
while (name[name_len])
name_len++;
while (owner[owner_len])
owner_len++;
 new_name = malloc(name_len + 1);
new_owner = malloc(owner_len + 1);
if (new_name == NULL || new_owner == NULL)
{
free(new_name);
free(new_owner);
return (NULL);
}
for (int i = 0; i <= name_len; i++)
new_name[i] = name[i];
for (int i = 0; i <= owner_len; i++)
new_owner[i] = owner[i];
new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
{
free(new_name);
free(new_owner);
return (NULL);
}
new_dog_ptr->name = new_name;
new_dog_ptr->age = age;
new_dog_ptr->owner = new_owner;
return (new_dog_ptr);
}

