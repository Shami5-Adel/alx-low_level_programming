#include "lists.h"
/**
 * print_listint -program that  prints all the elements of a listint_t list
 * Return -n 0
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (0);
}
