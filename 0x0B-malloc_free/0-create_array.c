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
	char *ptr;

	ptr = malloc(sizeof(size));

	if (size == 0)
		return (0);

	while (size--)
	{
		*(ptr) = c;
		ptr++;
	}
	return (ptr);

}
