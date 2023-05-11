#include "main.h"
/**
 * _pal - checks the characters recursively for palindrome
 * @s: string to check
 * @a: iterator
 * @length: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int _pal(char *s, int a, int length)
{
if (*(s + a) != *(s + length - 1))
return (0);
if (a >= length)
return (1);
return (_pal(s, a + 1, length - 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
