#include "main.h"

/**
 * print_rev - prints a string in reverse followed by new line
 *@s : an input string
 * return nothing
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	while (count)
	{
		_putchar(s[--count]);
	}
	_putchar('\n');
}
