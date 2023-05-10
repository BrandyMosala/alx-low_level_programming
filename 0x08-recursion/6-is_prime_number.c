#include "main.h"
/**
 * is_prime_recursive - returns 1 if the input integer is a prime number
 * @n: number to calculate the prime number
 * @divisor: itterator
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_recursive(int n, int divisor)
{
if (n < 2)
return (0);
if (divisor * divisor > n)
return (1);
if (n % divisor == 0)
return (0);
return (is_prime_recursive(n, divisor + 1));
}
/**
 * is_prime_number - says if an integer is a prime number
 * @n: number to evaluate
 * Return: 1
 */
int is_prime_number(int n)
{
return (is_prime_recursive(n, 2));
}
