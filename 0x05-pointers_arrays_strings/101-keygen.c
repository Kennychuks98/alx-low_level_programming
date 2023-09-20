#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Generates a random password.
*
*Return: Always 0.
*/
int main(void)
{
char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int password_length = 12;  // Adjust the password length as needed
char password[password_length + 1];  // +1 for the null terminator
int charset_length = sizeof(charset) - 1;  // Length of the character set
srand(time(NULL));  // Seed the random number generator
for (int i = 0; i < password_length; i++)
{
int random_index = rand() % charset_length;
password[i] = charset[random_index];
}
password[password_length] = '\0';  // Null-terminate the password
printf("Generated Password: %s\n", password);
return (0);
}

