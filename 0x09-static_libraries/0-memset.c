#include "main.h"
/**
 * _memset - sets the first of bytes of dest to value c
 * @s: pointer address of memory to be filled
 * @b: desired value
 * @n: amount of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int a = 0;
for (; n > 0; a++)
{
s[a] = b;
a--;
}
return (s);
}
