int is_palindrome_helper(char *s, int start, int end);
/**
*is_palindrome - checks if a string is a palindrome
*@s: the string to check
*
*Return: 1 if palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
int len = 0;
 while (s[len] != '\0')
len++;
return is_palindrome_helper(s, 0, len - 1);
}
/**
*is_palindrome_helper - helper function for is_palindrome
*@s: the string to check
*@start: the starting index
*@end: the ending index
*
*Return: 1 if palindrome, 0 otherwise
*/
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return 1;
if (s[start] != s[end])
return 0;
return is_palindrome_helper(s, start + 1, end - 1);
}

