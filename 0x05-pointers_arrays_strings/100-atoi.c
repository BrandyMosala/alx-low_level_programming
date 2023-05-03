#include "main.h"
/**
 * _atoi - turns a string to an integer
 * @s: the string to be converted to an integer
 * Return: integer converted from the sring
 */
int _atoi(char *s)
{
int indx, d, n, len, flg, digit;
indx = 0;
d = 0;
n = 0;
len = 0;
flg = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (indx < len && flg == 0)
{
if (s[indx] == '-')
d++;
if (s[indx] >= '0' && s[indx] <= '9')
{
digit = s[indx] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
flg = 1;
if (s[indx + 1] < '0' || s[indx + 1] > '9')
break;
flg = 0;
}
indx++;
}
if (flg == 0)
return (0);
return (n);
}
