#include "lists.h"
/**
 * sum_dlistint - function
 * @head: pointer to head of the linked list
 * Return: sum of all the data (n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *a = head;

	if (!head)
		return (0);

	while (a)
	{
		sum += a->n;
		a = a->next;
	}
	return (sum);
}
