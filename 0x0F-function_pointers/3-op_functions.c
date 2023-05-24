#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that returns the sum of two numbers
 * @a: the first number
 * @b: the second number
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - function that returns the difference of two numbers
 * @a: the first number.
 * @b: the second number.
 * Return: the difference of a and b.
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - function that returns the product of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - function that returns the division of two numbers
 * @a: the first number
 * @b: the second number.
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - function that returns the remainder of the division a and b
 * @a: The first number.
 * @b: The second number.
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
return (a % b);
}

