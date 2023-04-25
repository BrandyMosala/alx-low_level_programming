#include "main.h"
/**
 *print_sign - prints sight of a number 
 *@n: Number to be checked
 *Return: 1 for positive number -1 for negativer number
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
