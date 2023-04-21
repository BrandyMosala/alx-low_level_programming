#include <stdio.h>
/**
 *main - entry point
 *Description: a program that prints single digit numbers'
 *Return: 0 Always
 */
int main(void)
{
int a;
for (a = 48; a <= 57; a++)
{
putchar(a);
if (a == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
