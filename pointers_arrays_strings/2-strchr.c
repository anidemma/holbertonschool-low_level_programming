#include "main.h"
/**
 * _strchr - function
 * @s: variable
 * @c: variable
 * Return: @c, NULL otherwise
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
