#include "main.h"
/**
 * _puts - fuction that prints a string
 *
 * @str: the pointer that holds a value
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
