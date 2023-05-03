#include "main.h"
/**
 * char *_strcpy - this function copies the content from src to dest
 * @dest: copy to
 * @src: copy from
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int a = 0;
int b = 0;
while (*(src + a) != '\0')
{
a++;
}
for (; b < a; b++)
{
dest[b] = src[b];
}
dest[a] = '\0';
return (dest);
}

