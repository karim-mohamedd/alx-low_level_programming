#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: first input parameter
 *
 * @b: second input parameter
 *
 * Return: Always 0 (Success)
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
