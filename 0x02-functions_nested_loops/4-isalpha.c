#include "main.h"
/**
* _isalpha - function to check if c is a alphabetic character
* @c:	is the int that will use for the argument of the function
* Return: Always success
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
