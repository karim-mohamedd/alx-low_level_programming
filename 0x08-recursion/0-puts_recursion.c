#include "main.h"

/**
 * _puts_recursion -  prints a string, followed by a new line.
 *
 * @s: input parameter
 *
 * Return: 0 (Always success)
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	void _puts_recursion(char *s + 1)
}
