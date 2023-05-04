#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;
for (a = 0; a < n && src[a] != '\0'; a++)
;
for (b = 0; b < n && src[b] != '\0'; b++)
{
dest[a] = src[b];
a++;
}
dest[a] = '\0';
return (dest);
}
