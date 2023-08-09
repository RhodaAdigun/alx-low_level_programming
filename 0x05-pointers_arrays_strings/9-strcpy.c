#include "main.h"
/**
* *_strcpy - copies the content of a string to another
*@dest: wher to copy string to
*@src: origin of the string
*Return: a pointer to the destination string(dest)
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
