#include <stdlib.h>
#include "main.h"
/**
 * *array_range - arrays of intergers
 * @min: min rage of values
 * @max: max range of values
 * Return: pointer to a new array
 */
int *array_range(int min, int max)
{
int *ptr;
int a, size;
if (min > max)
return (NULL);
size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
return (NULL);
for (a = 0; min <= max; a++)
ptr[a] = min++;
return (ptr);
}
