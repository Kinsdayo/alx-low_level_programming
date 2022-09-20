#include "main.h"

/**
* rev_string -> reversing a string
* @s:	the string to be modified
*
* Return: void
*/
void rev_string(char *s)
{
	int I, i;
	char ch;

	for (I = 0; s[I] != '\0'; I++)

	for (i = 0; i < I / 2; i++)

	{
		ch = s[I];
		s[I] = s[I - 1 - i];
		s[I - 1 - i] = ch;
	}
}
