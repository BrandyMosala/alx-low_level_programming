#include "main.h"
/**
 * _strcat - joins two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
for (int a = 0; dest[a] != '\0'; a++)
for (int b = 0; src[b] != '\0'; b++)
{
dest[a] = src[b];
a++;
}
return (dest);
}
