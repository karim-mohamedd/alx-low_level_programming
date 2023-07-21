#include "main.h"
/**
 * print_line - printing a line 
 *
 * @length: input integer define the length of it
 *
 * Return: Always 0 (Success)
*/

void print_line(int n)
{
	int length;
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (n = 1; length <= n; n++)
			_putchar('_');
	_putchar('\n')
	}
}
