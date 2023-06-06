#include "lists.h"
/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to listint_t to be frred
 */
void free_listint2(listint_t **head)
{
listint_t *tempo;
if (!head)
return;
while (*head)
{
tempo = (*head)->next;
free(*head);
*head = tempo;
}
*head = NULL;
}
