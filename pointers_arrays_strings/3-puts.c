#include "main.h"
/**
 * _puts - function
 * @str: pointer
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
