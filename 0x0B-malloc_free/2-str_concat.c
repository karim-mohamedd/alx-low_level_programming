#include"main.h"

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: concatrnated string
*/

char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	int i;
	int j;
	int k;
	char *m;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 ='\0';

	for ( i = 0; s1[i] != '\0'; size1++)
	;
	for ( j = 0; s2[j] != '\0'; size2++)
	;


	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
	{
		return (0);
	}
	else
	{
		for ( k = 0; k < size1 + size2; i++)
			if (k < size1)
				m[k] = s1[k];
			else
				m[k] = s2[k - size1];
	}
	return (m);
}
