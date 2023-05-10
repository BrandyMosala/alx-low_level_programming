#include "main.h"
/**
 * _sqrt_recursive - returns the natural square root of a number
 *@n: number to calculate the square root of
 *@guess: iterator
 *Return: the resulting square root
 */
int _sqrt_recursive(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (_sqrt_recursive(n, guess + 1));
}
/**
 *_sqrt_recursion - return the natural square root of a number
 *@n: number to calculate the square root
 *Return: sqaure root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (_sqrt_recursive(n, 1));
}
