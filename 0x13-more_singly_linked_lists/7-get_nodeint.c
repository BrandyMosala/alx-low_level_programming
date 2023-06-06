#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the node
 * @head: the first node
 * @index: the index of the node
 * Return: pointer to node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a = 0;
listint_t *tempo = head;
while (tempo && a < index)
{
tempo = tempo->next;
a++;
}
return (tempo ? tempo : NULL);
}
