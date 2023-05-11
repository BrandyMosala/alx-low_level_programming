#include "main.h"
/**
 * _sqrt_recursive - recurse to search for natural number
 * @n: value to calculate sqaure root
 * @o: iterator
 * Return: resulting square root
 */
int _sqrt_recursive(int n, int o)
{
if (o * o == n)
return (o);
if (o * o > n)
return (-1);
return (_sqrt_recursive(n, o + 1));
}
/**
 * _sqrt_recursion - a function that returns square root of a number
 * @n: input
 * Return: resulting square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (_sqrt_recursive(n, 1));
}

