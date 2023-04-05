#include "list.h"
/**
 * print_listint - print the elememnts of a listint_t list
 * @h: linked list of type listint_t
 * Return: always return 0
 */
size_t print_listint(const listint_t *h)
{
size_t nu = 0;
while (h)
{
printf("%d\n", h->n);
n++;
h = h->next;
}
return (n);
}
