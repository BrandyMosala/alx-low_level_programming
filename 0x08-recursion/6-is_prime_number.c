#include "main.h"
/**
 * is_prime_recursive - calculates the number
 * @n: number to evaluate
 * @o: iterator
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_recursive(int n, int o)
{
if (o == 1)
return (1);
if (n % o == 0 && o > 0)
return (0);
return (is_prime_recursive(n, o - 1));
}
/**
 * is_prime_number - says if integer is a prime number
 * @n: number to evaluate
 * Return: iterator
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime_recursive(n, n - 1));
}
