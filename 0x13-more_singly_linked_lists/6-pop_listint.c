#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t list
 * @head: pointer to the first element in the list
 * Return: always 0 for empty list
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int nr;
if (!head || !*head)
return (0);
nr = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (nr);
}
