#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function
 * @size: variable
 * @c: variable
 * Return: pointer to the array, NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	int i = 0;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == 0)
		return (NULL);
	for (; i < size; i++)
		*(array + i) = c;
	return (array);
}
