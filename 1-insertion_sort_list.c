#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - uses insertion sort
 * @list: pointer
 * Return: void
 */



void insertion_sort_list(listint_t **list)
{
listint_t *curr, *next;
if (list == NULL || *list == NULL || (*list)->next == NULL)
{
return;
}
curr = (*list)->next;
while (curr != NULL)
{
next = curr->next;
while (curr->prev != NULL && curr->n < curr->prev->n)
{
curr->prev->next = curr->next;
if (curr->next != NULL)
{
curr->next->prev = curr->prev;
}
curr->next = curr->prev;
curr->prev = curr->prev->prev;
curr->next->prev = curr;
if (curr->prev == NULL)
{
*list = curr;
}
else
{
curr->prev->next = curr;
}
print_list(*list);
}
curr = next;
}
}
