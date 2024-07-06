#include "main.h"
/**
 * _strstr - func
 * @haystack: variable
 * @needle: variable
 * Return: haystack or end of the str
*/
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (0);
}
