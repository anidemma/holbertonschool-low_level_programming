#include "function_pointers.h"
/**
 * print_name - function
 * @name: variable
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
