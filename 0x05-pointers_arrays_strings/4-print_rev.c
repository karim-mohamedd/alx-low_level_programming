#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: input parameter
 *
 * Return: Always 0 (Success)
*/

void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	while (i--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
