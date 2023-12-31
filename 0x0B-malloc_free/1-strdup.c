#include"main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space
 *
 * @str: string given as parameter
 *
 * Return: array of string
*/

char *_strdup(char *str)
{
	char *s;
	int size;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0';  size++)
	;

	s = malloc(size * sizeof(*str) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			s[i] = str[i];
		}
	}
	return (s);
}
