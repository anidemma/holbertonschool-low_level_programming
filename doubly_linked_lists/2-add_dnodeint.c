#include "lists.h"
/**
 * add_dnodeint - function
 * @head: double pointer to head
 * @n: variable
 * Return: node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *elem, *tmp = *head;

	elem = malloc(sizeof(dlistint_t));
	if (elem == NULL)
		return (NULL);
	elem->n = n;
	elem->next = *head;
	elem->prev = NULL;

	if (*head != NULL)
		tmp->prev = elem;
	*head = elem;
	return (elem);
}
