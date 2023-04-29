#include <unistd.h>
/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *
 *Return: 1 if successful, 0 if unsuccessful
 *On error, -1 return.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
