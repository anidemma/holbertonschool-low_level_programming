#include "lists.h"
/**
 * add_node_end - function
 * @head: double pointer to the head of linked list
 * @str: pointer to new string in node
 * Return: adress of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	int len = 0;
	list_t *node_end, *tmp;

	if (!str)
		return (NULL);
	while (*(str = i))
		len++, i++;
	i = 0;

	node_end = malloc(sizeof(list_t));

	if (!node_end)
		return (NULL);

	node_end->str = strdup(str);
	node_end->len = len;
	node_end->next = NULL;

	if (*head == NULL)
	{
		*head = node_end;
		return (node_end);
	}
	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = node_end;

	return (node_end);
}
