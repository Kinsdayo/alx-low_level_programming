#include <unistd h>

/**
* _putchar - writes the character c to stdout
* @c:	The character to print
*
* Return: On success 1.
* On error, -1 is rerurned, and errno is is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
