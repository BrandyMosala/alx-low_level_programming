#include "main.h"
/**
 * _strcat - merges to strings together
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int a;
int b;
for (a = 0; dest[a] != '\0'; a++)
;
for (b = 0; src[b] != '\0'; b++)
{
dest[a] = src[b];
a++;
}
dest[a] = '\0';
return (dest);
}
