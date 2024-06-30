#include "main.h"
/**
 * _strlen - function
 * @s: pointer
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
