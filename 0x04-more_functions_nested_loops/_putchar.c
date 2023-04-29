#include "main.h"
#include <unistd>
/**
 *_putchar - writes the character c to stdout
 *@c: Thr character to print
 *Return: On success 1
 *On error, -1 is returned, and ermo is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
