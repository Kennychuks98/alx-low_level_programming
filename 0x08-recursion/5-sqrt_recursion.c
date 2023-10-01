int sqrt_helper(int n, int guess);
/**
*_sqrt_recursion - returns the natural square root of a number
*@n: the number to find the square root of
*
*Return: the square root or -1 if n does not have a natural square root
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt_helper(n, 0));
}
/**
*sqrt_helper - helper function for _sqrt_recursion
*@n: the number to find the square root of
*@guess: the current guess for the square root
*
*Return: the square root or -1 if n does not have a natural square root
*/
int sqrt_helper(int n, int guess)
{
if (guess * guess > n)
return (-1);
if (guess * guess == n)
return (guess);
return (sqrt_helper(n, guess + 1));
}

