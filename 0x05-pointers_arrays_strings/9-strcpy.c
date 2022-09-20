#include "main.h"

/**
* _strcpy -> copy a string
* @dest:	Destinaation value
* @src:	source value
*
* Return: the pointer dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
