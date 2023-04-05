#include "lists.h"
/**
 * free_listint - frees list_int list
 * @head: linked list to be free
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}