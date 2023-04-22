#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point
 *Description: 'a program that prints combinations of two digits'
 *Return: 0
 */
int main(void)
{
int a, b;
for (a = '0'; b < '9'; a++)
{
for (b = a + 1; b <= '9'; b++)
{
if (b != a)
{
putchar(a);
putchar(b);
if (a == '8' && b == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
