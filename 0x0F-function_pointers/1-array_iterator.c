#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: the array to execute on
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size <= 0 || action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
