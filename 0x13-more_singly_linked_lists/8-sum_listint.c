#include "lists.h"
/**
 * sum_listint - a function that calculates the sum of all the data
 * @head: the first node
 * Return:the resulting sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *tempo = head;
while (tempo)
{
sum += tempo->n;
tempo = tempo->next;
}
return (sum);
}
