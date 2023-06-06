#include "lists.h"

/**
 * insert_nodeint_at_index -a function that inserts a new node
 * @head: a pointer to the first node in the list
 * @idx: a index where the new node is added
 * @n: the data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int a;
listint_t *new;
listint_t *tempo = *head;
new = malloc(sizeof(listint_t));
if (new == NULL || head == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (a = 0; tempo && a < idx; a++)
{
if (a == idx - 1)
{
new->next = tempo->next;
tempo->next = new;
return (new);
}
else
tempo = tempo->next;
}
return (NULL);
}
