#include "main.h"
#include<stddef.h>
/**
 * _strpbrk - function
 * @s: variable
 * @accept: variable
 * Return: end of string
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
