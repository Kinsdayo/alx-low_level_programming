#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercases
 * @str:	parameter
 * Return: address tp to the string
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}