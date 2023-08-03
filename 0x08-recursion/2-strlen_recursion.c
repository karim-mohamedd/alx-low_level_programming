#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: input parameter
 *
 * Return: integer value
*/

int _strlen_recursion(char *s)
{
	int x = 1;

	if (*s > '\0')
	{
		x += _strlen_recursion(s + 1);
	}
	return (x);
}
