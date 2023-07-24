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
	int long i = 0;
	int o;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	for (o = i; i > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
