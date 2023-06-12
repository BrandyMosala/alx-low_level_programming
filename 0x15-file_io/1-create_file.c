#include "main.h"

/**
 * create_file - a function creates a file
 * @filename: pointer to the name of the file to be created
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1, - 1 if otherwise
 */
int create_file(const char *filename, char *text_content)
{
int f, wid, length = 0;
if (!filename)
return (-1);
if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}
f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wid = write(f, text_content, length);
if (f == -1 || wid == -1)
return (-1);
close(f);
return (1);
}

