#include "lists.h"
/**
 * free_dlistint - function
 * @head: pointer to the head of linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *file;

	while (head)
	{
		file = head;
		head = head->next;
		free(file);
	}
}
