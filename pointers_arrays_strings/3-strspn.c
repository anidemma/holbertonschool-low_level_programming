#include "main.h"
/**
 * _strspn - function
 * @s: variable
 * @accept: variable
 * Return: the number of bytes of @s which  consist of @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (accept[a] == *s)
			{
				n++;
				break;
			}
			else if ((accept[a + 1]) == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
