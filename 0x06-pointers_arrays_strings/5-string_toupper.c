#include "main.h"
/**
 * string_toupper - a function that cahnges all lowercase letters of a string
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
int a;
for (a = 0; n[a] != '\0'; a++)
{
if (n[a] >= 'a' && n[a] <= 'z')
n[a] = (int)n[a] - 32;
}
return (n);
}
