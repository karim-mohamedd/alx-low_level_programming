#include"main.h"

/**
 * create_array - function that creates an array of chars
 *
 * @size: the size of the array
 * @c: the chars i will put
 *
 * Return: pointer to the array or NULL if failed
*/

char *create_array(unsigned int size, char c)
{
	int *ptr;
	int i = 0;

	ptr = (int *)malloc(sizeof(size));

	if (size == 0)
		return (0);

	while (size != 0)
	{
		*(ptr + i) = c;
		size--;
	}
	return (ptr);

}
