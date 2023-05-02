#include "main.h"
/**
 *_puts - a function thats prints a string
 *@str: string to print
 *Return:
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
