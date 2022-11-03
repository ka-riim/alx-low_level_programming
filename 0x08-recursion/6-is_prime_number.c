#include "main.h"
/**
 * is_prime_number - checks for a prime number
 * @n: number to check
 * Return: integer
*/
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	if (n == n * -1)
		return  (0);
	if (n % n == 0 && n % 1 == 0)
	{
		return (1);
	}
	return (0);
}
