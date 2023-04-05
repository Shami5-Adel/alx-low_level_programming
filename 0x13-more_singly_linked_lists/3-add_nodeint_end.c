#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of listint_t list
 * @head: pointer to the first element
 * @n: will be inserted in the new element
 * Return: always 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode;
listint_t *temp = *head;
newnode = malloc(sizeof(listint_t));
if (!newnode)
return (NULL);
newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
return (newnode);
}
while (temp->next)
temp = temp->next;
temp->next = newnode;
return (newnode);
}
