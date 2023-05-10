#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character to stdout
 * @c: characted to be printed
 * Return: on success 1
 * On error, -1 is returned and errn is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
