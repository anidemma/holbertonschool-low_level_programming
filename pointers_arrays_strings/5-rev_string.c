#include "main.h"
/**
 * rev_string - function
 * @s: pointer
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char rev;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		rev = s[i];
		s[i++] = s[len];
		s[len] = rev;
	}
}
