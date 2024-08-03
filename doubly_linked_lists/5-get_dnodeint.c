#include "lists.h"
/**
 * get_dnodeint_at_index - function
 * @head: pointer to head of linked list
 * @index: data
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *a = head;
	unsigned int i = 0;

	if (!head)
	return (NULL);

	for (; a; i++)
	{
		if (i == index)
			return (a);
		a = a->next;
	}
	return (a);
}
