#include "main.h"

/**
 * _strncat -  concatenates two strings.
 *
 * @dest: first input
 * @src: second input 
 * @n: third input
 *
 * Return: dest pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int i , j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	Return (dest);
}
