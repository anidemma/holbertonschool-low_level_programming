#include "main.h"
/**
 * _strstr - function
 * @haystack: variable
 * @needle: variable
 * Return: haystack, end of the string otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle != 0)
	{
		while (*haystack++)
		{
			i = 0;

			if (haystack[i] == needle[i])
			{
				do {
					if (needle[i + 1] == '\0')
						return (haystack);
					i++;
				}
				while (haystack[i] == needle[i])
					;
			}
		}
	}
	else
		return (haystack);

	return ('\0');
}
