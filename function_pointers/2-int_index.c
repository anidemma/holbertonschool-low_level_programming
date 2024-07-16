#include "function_pointers.h"
/**
 * int_index - function
 * @array: variable
 * @size: variable
 * @cmp: pointer to the function
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == 0 || size <= 0 || cmp == 0)
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

}
