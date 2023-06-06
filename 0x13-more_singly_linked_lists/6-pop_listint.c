#include "lists.h"
/**
 * pop_listint - a function that deletes the head node
 * @head: a pointer to the first element
 * Return: data inside the elements that were deleted or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *tempo;
int number;
if (head == NULL || *head == NULL)
return (0);
number = (*head)->n;
tempo = (*head)->next;
free(*head);
*head = tempo;
return (number);
}
