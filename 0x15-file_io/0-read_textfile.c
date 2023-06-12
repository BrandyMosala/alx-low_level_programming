#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads text file print to STDOUT
 * @filename: a text file to be read
 * @letters: a number of letters
 * Return: w - an actual number of bytes read and printed
 * 0 when function fails, filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t f;
ssize_t x;
ssize_t y;
f = open(filename, O_RDONLY);
if (f == -1)
return (0);
buf = malloc(sizeof(char) * letters);
y = read(f, buf, letters);
x = write(STDOUT_FILENO, buf, y);
free(buf);
close(f);
return (x);
}

