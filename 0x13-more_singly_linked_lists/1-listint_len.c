#include "lists.h"

/**
 * listint_len - returns the number of elements of the list
 * @h: linked list of type listint_t
 * Return: always 0
*/

size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h)
{
++num;
h = h->next;
}
return (num);
}
