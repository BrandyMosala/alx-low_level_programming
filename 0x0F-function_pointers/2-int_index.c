#include "function_pointers.h"
/**
 * int_index - a function that returns index place
 * @array: array
 * @size: array elements size
 * @cmp: pointer to functiom of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int v;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (v = 0; v < size; v++)
{
if (cmp(array[v]))
return (v);
}
return (-1);
}

