#include "main.h"
/**
 * swap_int - function
 * @a: pointer
 * @b: pointer
 */
void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
