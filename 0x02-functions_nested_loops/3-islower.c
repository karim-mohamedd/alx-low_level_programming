#include "main.h"
/**
 * int _islower - checks for lower case alphabets
 * @c: Character to be checked
 * Return: if character is lowercase, otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
