#include "main.h"
/**
 * _strstr - entry point
 * @haystack: input
 * @needle: input
 * Return:Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *x = haystack;
char *y = needle;
while (*x == *y && *y != '\0')
{
x++;
y++;
}
if (*x == '\0')
return (haystack);
}
return (0);
}
