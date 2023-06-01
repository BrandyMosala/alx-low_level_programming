#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function that returns number of elements in a linked list
 * @h: a pointer ti list_t list
 * Return: amount of elements in h
 */
size_t list_len(const list_t *h)
{
size_t a = 0;
while (h)
{
a++;
h = h->next;
}
return (a);
}
