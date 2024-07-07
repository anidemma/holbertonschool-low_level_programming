#include "main.h"
/**
 * _print_rev_recursion - function
 * @s: variable
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(--s);
	}
	else
		_putchar('\n');
}
