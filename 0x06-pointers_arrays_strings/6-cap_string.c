#include "main.h"
/**
 * cap_string - Cpitalized all words of a string
 * @str: string to be capitalized
 * Return: a pointer
 */
char *cap_string(char *str)
{
int index;
for (index = 0; str[index]; index++)
{
if (str[index] >= 'a' && str[index] <= 'z')
{
if (index == 0 ||
str[index - 1] == ' ' ||
str[index - 1] == '\t' ||
str[index - 1] == '\n' ||
str[index - 1] == ',' ||
str[index - 1] == ';' ||
str[index - 1] == '.' ||
str[index - 1] == '!' ||
str[index - 1] == '?' ||
str[index - 1] == '"' ||
str[index - 1] == '(' ||
str[index - 1] == ')' ||
str[index - 1] == '{' ||
str[index - 1] == '}')
{
str[index] -= 32;
}
}
}
return (str);
}

