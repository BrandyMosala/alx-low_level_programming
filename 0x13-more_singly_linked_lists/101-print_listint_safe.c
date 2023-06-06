#include "lists.h"
/**
 * print_listint_safe - a function prints a listint_t list safely
 * @head: a pointer
 * Return:  number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
/*decalre node and index */
size_t number = 0;
long int diff;
while (head)
{
diff = head - head->next;
number++;
if (diff > 0)
head = head->next;
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
}
return (number);
}
