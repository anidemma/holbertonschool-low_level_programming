#include "main.h"
/**
 * _memset - function
 * @s: variable
 * @b: variable
 * @n: variable
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
