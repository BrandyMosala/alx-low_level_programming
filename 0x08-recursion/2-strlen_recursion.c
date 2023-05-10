#include "main.h"
/**
 * _strlen_recursion - a function returns the length of a string
 * @s: input
 * Return: 0 if null and s + 1 if true
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
