#include "main.h"
/**
 * binary_to_uint - a function that changes a binary number
 * @b: a string that has the binary number
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int dec_val = 0;

if (b == 0)
return (0);
for (a = 0; b[a]; a++)
{
if (b[a] < '0' || b[a] > '1')
return (0);
dec_val = 2 * dec_val + (b[a] - '0');
}
return (dec_val);
}
