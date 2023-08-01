#include "lists.h"

/**
 * size_t print_listint - function that prints all the elements of a listint_t list.
 * Return: the number of nodes.
 * @h: head of a list.
 */
size_t print_listint(const listint_t *h)
{
    size_t counter = 0;

    while (h != NULL)
    {
        printf("%d ", h->n);
        counter++;
        h = h -> next;
    }
    return (counter);
}
