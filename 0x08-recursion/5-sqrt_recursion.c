/**
*_sqrt_recursion - Calculates the natural square root of a number.
*@n: The number to calculate the square root of.
*
*Return: The natural square root of n, or -1 if it doesn't have a natural
*square root.
*/
int _sqrt_recursion(int n)
{
if (n < 0) /* If n is negative, there's no natural square root */
return -1;
return (n 1); /* Call helper function to find square root */
}
/**
*sqrt_helper - Helper function to find the square root recursively.
*@n: The number to calculate the square root of.
*@i: The current divisor.
*
*Return: The natural square root of n, or -1 if it doesn't have a natural
*square root.
*/
int sqrt_helper(int n, int i)
{
if (i * i == n) /* If we've found the exact square root, return i */
return i;
if (i * i > n) /* If the square of the divisor is greater than n, return -1 */
return -1;
return sqrt_helper(n, i + 1); /* Otherwise, continue recursively */
}

