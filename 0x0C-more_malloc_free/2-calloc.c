#include <stdlib.h>
#include "main.h"
/**
 * _memset - fills memory with bytes
 * @s: memory place to be filled
 * @b: char to copy
 * @n: number of bytes to copy
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
/**
 * *_calloc - places memory for an array
 * @nmemb: number of elements
 * @size: size of an element
 * Return: pointer to placed memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb * size);
return (ptr);
}
