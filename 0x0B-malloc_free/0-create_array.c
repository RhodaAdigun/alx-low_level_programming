#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char c
 * Return: NULL if size = 0,
 * returns a pointer to the array, or NULL if it fails
 *@size: the size/length of array to create
 *@c: the char that initializes array
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int no;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (no = 0; no < size; no++)
		ptr[no] = c;

	return (ptr);
	free(ptr);
}
