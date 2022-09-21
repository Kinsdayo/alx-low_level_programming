#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercases
 * @str:	parameter
 * Return: rerurns a character
 */

char *string_toupper(char *)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}

	return (str);

}
