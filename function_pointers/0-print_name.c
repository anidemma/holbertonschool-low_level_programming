#include "main.h"
/**
 * print_name - function
 * @name: variable
 * @f:fuction
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
