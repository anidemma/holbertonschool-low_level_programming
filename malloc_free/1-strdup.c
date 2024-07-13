#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - function
 * @str: variable
 * Return: pointer to the dub string, NULL otherwise
 */
char *_strdup(char *str)
{
	int i, b = 0;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		b++;

	dup = malloc(sizeof(char) * (b + 1));

	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[b] = '\0';

	return (dup);
}
