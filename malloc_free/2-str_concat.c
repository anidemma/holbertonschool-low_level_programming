#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - function
 * @s1: variable
 * @s2: variable
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int a = 0;
	int b = 0;
	char *cat;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	for (i = 0; s1[i] || s2[i]; i++)
		b++;

	cat = malloc(sizeof(char) * b);

	if (cat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		cat[a++] = s1[i];

	for (i = 0; s2[i]; i++)
		cat[a++] = s2[i];

	cat[a] = 0;
	return (cat);
}
