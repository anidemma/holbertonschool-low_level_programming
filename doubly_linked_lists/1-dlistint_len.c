#include "lists.h"
/**
 * dlistint_len - function
 * @h: pointer to head
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	for (; h; i++)
		h = h->next;
	return (i);
}
