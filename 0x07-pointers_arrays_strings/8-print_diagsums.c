#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int sum2, sum4, x;
	sum2 = 0;
	sum4 = 0;
for (x = 0; x < size; x++)
{
sum2 = sum2 + a[x * size + x];
}
for (x = size - 1; x >= 0; x--)
{
sum4 += a[x * size + (size - x - 1)];
}
printf("%d, %d\n", sum2, sum4);
}

