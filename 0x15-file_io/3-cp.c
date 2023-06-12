#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - function that allocates 1024 bytes for a buffer.
 * @file: buffer is storing chars for.
 * Return: pointer to the newly-allocated buffer
 */
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (!buffer)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}

/**
 * close_file - a function that closes file descriptors
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
int cls;
cls = close(fd);
if (cls == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - function copies the contents of a file
 * @argc: number of arguments supplied
 * @argv: array of pointers to the arguments
 * Return: 0 on success.
 * Description: If the argument count is incorrect - exit code 9
 */
int main(int argc, char *argv[])
{
int f, t, r, w;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
f = open(argv[1], O_RDONLY);
r = read(f, buffer, 1024);
t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (f == -1 || r == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
w = write(t, buffer, r);
if (t == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
r = read(f, buffer, 1024);
t = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(buffer);
close_file(f);
close_file(t);
return (0);
}
