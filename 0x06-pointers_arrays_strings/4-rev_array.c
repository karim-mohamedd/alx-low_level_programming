#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	for (j = i; j <=  n; j--)
	{
		_putchar(a[j]);
	}
}
