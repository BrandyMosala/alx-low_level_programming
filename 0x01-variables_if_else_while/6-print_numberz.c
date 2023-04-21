#include <stdio.h>
/**
 *main - entry point
 *Description: 'a program that prints all single digits using putchar'
 *Return: Always 0
 */
int main(void)
{
int a;
for (a = 0; a <= 9; a++)
{
putchar(a + 48);
}
putchar('\n');
return (0);
}
