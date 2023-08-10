#include "main.h"
#include <stdlib.h>

/**
 * void *malloc_checked - allocates memory using malloc
 *
 * Return: A pointer to the allocated memory
 * on failure, function should cause normal process termination
 * with a status value of 98
 * @b: amount of memory to be allocated
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
