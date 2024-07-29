/**
 * print_list - function
 * @h: variable
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
