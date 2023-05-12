#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string to use
 * Return: integer
 */
int _atoi(char *s)
{
int sign = 1, a = 0;
unsigned int b = 0;
while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
{
if (s[a] == '-')
sign *= -1;
a++;
}
while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
{
b = (b * 10) + (s[a] - '0');
a++;
}
b *= sign;
return (b);
}
