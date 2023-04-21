#include <stdio.h>
/**
 *main - entry point
 *Description: 'a program that prints the lowercase alphabet in reverse'
 *Return: Always 0
 */
int main(void)
{
int a = 122;
while (a >= 97)
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}
