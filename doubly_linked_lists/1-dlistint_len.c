#include "lists.h"
/**
 * dlistint_len - function
 * @h: pointer to head
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	for (int i = 0; h; i++)
		h = h->next;
	return (i);
}
