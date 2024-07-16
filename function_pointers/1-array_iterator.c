#include "function_pointers.h"
/**
 *  array_iterator - function
 *  @array: variable
 *  @size: variable
 *  @action:function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a = 0;

	if (action != NULL || size != 0)
		for (; i < size; i++)
			(*action)(array[i]);
}
