#include "main.h"
/**
 * get_endianness - function that checks the endianess
 * Return: 0 for big and 1 for liitle
 */
int get_endianness(void)
{
unsigned int a = 1;
char *c = (char *) &a;
return (*c);
}
