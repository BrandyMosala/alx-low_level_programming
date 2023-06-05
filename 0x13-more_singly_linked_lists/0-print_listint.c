#include "lists.h"
/**
 * print_listint - function that prints all the elements of linked list
 * @h: listint_t to print
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
size_t number = 0;
while (h)
{
printf("%d\n", h->n);
number++;
h = h->next;
}
return (number);
}
