#include "main.h"
/**
 *print_alphabet - It prints the alphabets in lowercase
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int a;
for (a = 97; a <= 122; a++)
_putchar(a);
_putchar('\n');
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}
