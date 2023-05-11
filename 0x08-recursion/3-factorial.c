#include "main.h"
/**
 *factorial - it returns the factorial number
 *@n: if is lower than 0
 *Return: -1 if error, 1 if true
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
