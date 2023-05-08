#include "main.h"
/**
 * print_chessboard - entry point
 * @a: array
 * Return: Always 0 (Sucess)
 */
void print_chessboard(char (*a)[8])
{
int x;
int y;
for (x = 0; x < 8; x++)
{
for (y = 0; y < 9; y++)
_putchar(a[x][y]);
_putchar('\n');
}
}
