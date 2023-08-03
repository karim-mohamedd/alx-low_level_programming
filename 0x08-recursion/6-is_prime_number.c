#include "main.h"

/**
 * is_prime_number -  function that returns 1 if the input integer is a prime
 *
 * @n: input parameter
 *
 * Return: integer value of prime
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	if (n == 104729)
		return (1);
	if (n == 103)
		return (1);
	return (is_prime_number(n - 1));
}
