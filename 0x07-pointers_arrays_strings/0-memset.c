#include "main.h"
/**
 * _memset - function that fills memory with constant byte
 * @s: starting address of memory to be filled
 * @b: desired value
 * @n: number of bytes to be charged
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int a;
for (a = 0; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}
