#include "main.h"
/**
 *_isupper - uppercase character
 *@c: character to checked
 *Return: 1 for uppercase character or 0 for anything else
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
